text = "67 104 97 113 117 101 32 103 233 110 233 114 97 116 105 111 110 32 97 32 115 111 110 32 112 104 105 108 111 115 111 112 104 101 44 32 233 99 114 105 118 97 105 110 32 111 117 32 97 114 116 105 115 116 101 32 113 117 105 32 115 97 105 115 105 116 32 101 116 10 105 110 99 97 114 110 101 32 108 39 105 109 97 103 105 110 97 105 114 101 32 100 117 32 109 111 109 101 110 116 46 32 73 108 32 97 114 114 105 118 101 32 113 117 101 32 99 101 115 32 112 104 105 108 111 115 111 112 104 101 115 32 115 111 105 101 110 116 10 114 101 99 111 110 110 117 115 32 100 101 32 108 101 117 114 32 118 105 118 97 110 116 44 32 109 97 105 115 32 108 101 32 112 108 117 115 32 115 111 117 118 101 110 116 32 105 108 32 102 97 117 116 32 97 116 116 101 110 100 114 101 32 113 117 101 32 108 97 10 112 97 116 105 110 101 32 100 117 32 116 101 109 112 115 32 102 97 115 115 101 32 115 111 110 32 101 102 102 101 116 46 32 81 117 101 32 99 101 116 116 101 32 114 101 99 111 110 110 97 105 115 115 97 110 99 101 32 115 111 105 116 10 105 109 109 233 100 105 97 116 101 32 111 117 32 100 105 102 102 233 114 233 101 44 32 117 110 101 32 233 112 111 113 117 101 32 101 115 116 32 109 97 114 113 117 233 101 32 112 97 114 32 99 101 115 32 104 111 109 109 101 115 32 113 117 105 10 101 120 112 114 105 109 101 110 116 32 108 101 117 114 115 32 105 100 233 97 117 120 44 32 100 97 110 115 32 108 101 115 32 109 117 114 109 117 114 101 115 32 100 39 117 110 32 112 111 232 109 101 32 111 117 32 100 97 110 115 32 108 101 10 103 114 111 110 100 101 109 101 110 116 32 100 39 117 110 32 109 111 117 118 101 109 101 110 116 32 112 111 108 105 116 105 113 117 101 46 32 78 111 116 114 101 32 103 233 110 233 114 97 116 105 111 110 32 97 32 117 110 10 112 104 105 108 111 115 111 112 104 101 46 32 67 101 32 110 39 101 115 116 32 110 105 32 117 110 32 97 114 116 105 115 116 101 32 110 105 32 117 110 32 233 99 114 105 118 97 105 110 46 32 67 39 101 115 116 32 117 110 10 105 110 102 111 114 109 97 116 105 99 105 101 110 46 10"
list = text.split(" ")

message = ""
for nombre in list:
    message += chr(int(nombre))

print(f"message : {message}")