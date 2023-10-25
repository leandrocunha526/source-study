import yt_dlp

url = input("Enter video url: ")

# List available formats
with yt_dlp.YoutubeDL() as ydl:
    info = ydl.extract_info(url, download=False)
    available_formats = info.get('formats', [])
    print("Available formats:")
    for index, fmt in enumerate(available_formats):
        print(f"{index}: {fmt['format_id']} ({fmt['ext']})")

# Ask the user to choose a format by index
chosen_format_index = int(input("Enter the index of the desired format: "))

if chosen_format_index < 0 or chosen_format_index >= len(available_formats):
    print("Invalid format index. Please choose a valid format.")
else:
    chosen_format = available_formats[chosen_format_index]['format_id']
    ydl_opts = {
        'format': chosen_format,
    }

    with yt_dlp.YoutubeDL(ydl_opts) as ydl:
        ydl.download([url])

    print("Video downloaded successfully!")
