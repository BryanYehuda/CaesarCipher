# CaesarCipher
Repository ini dibuat untuk memberikan contoh cara membuat dan juga dokumentasi program Caesar Cipher

## Apa itu Caesar Cipher?
Menurut [Geeks for Geeks](https://www.geeksforgeeks.org/caesar-cipher-in-cryptography/) Caesar Cipher adalah:

 >The Caesar Cipher technique is one of the earliest and simplest method of encryption technique. It’s simply a type of substitution cipher, i.e., each letter of a given text is replaced by a letter some fixed number of positions down the alphabet. For example with a shift of 1, A would be replaced by B, B would become C, and so on. The method is apparently named after Julius Caesar, who apparently used it to communicate with his officials."

 >Thus to cipher a given text we need an integer value, known as shift which indicates the number of position each letter of the text has been moved down. 
The encryption can be represented using modular arithmetic by first transforming the letters into numbers, according to the scheme, A = 0, B = 1,…, Z = 25

Yang dalam Bahasa Indonesianya berarti, Caesar Cipher adalah sebuah teknik yang paling awal dan sederhana dalam melakukan sebuah enkripsi. Caesar Cipher adalah sebuah tipe dari Substitusion Ciper yang berarti tiap huruf digantikan dengan sebuah huruf lain yang berjarak sebuah angka tetap dari posisinya dalam urutan sebuah alfabet. Semisal dengan sebuah key atau shift 1, maka huruf A akan digantikan dengan huruf B, huruf B akan digantikan dengan huruf C, dan seterusnya. Sedangkan untuk melakukan dekripsi kita harus mengetahui nilai dari integer key atau shift ini.

## Cara Penggunaan 
* Untuk melakukan Enkripsi, gunakan code `Encryption.c` dan kemudian masukkan pesan yang ingin dienkripsi dan masukkan nilai key-nya
* Untuk melakukan Dekripsi, gunakan code `Decryption.c` dan kemudian masukan ciphertext-nya dan masukkan nilai key-nya

