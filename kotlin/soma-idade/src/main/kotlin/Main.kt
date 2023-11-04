import java.time.LocalDate

fun agecalc(age: Int): Int {
    val currentYear = LocalDate.now().year
    return currentYear - age
}
fun main() {
    print("Digite a idade ")
    val age = readln().toInt()

    val total = agecalc(age)
    print("A idade calculada é: $total")
}