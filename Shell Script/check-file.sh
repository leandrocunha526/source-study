#!/bin/bash

file_name='test.txt'

if [ ! -f "$file_name" ]; then
    echo "The file $file_name doesn't exists"
    touch "$file_name"
else
   echo "The file $file_name already exists"
fi
