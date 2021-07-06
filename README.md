# Permainan-domino-dengan-brute-force-dan-greedy
Permainan domino adalah sebuah permainan yang menggunakan kartu yang 
pada satu sisinya terdapat tanda bulat bulat yang menyatakan nilainya yaitu 1 sampai 
6. Jumlah kartu domino keseluruhannya adalah 28 kartu. permainan ini dapat 
dimainkan oleh 4 orang bisa kurang dan bisa lebih. cara memainkan domino adalah 
dengan meletakkan kartu domino dengan nilai paling kecil dahulu yaitu kartu 
kosong. kemudian ikuti oleh pemain lain dengan menyambungkan kartu domino 
dengan nilai yang bersesuaian sehingga membentuk suatu pola yang tak terputus 
hingga kartu domino habis.

Project ini dibuat untuk menyelesaikan tugas besar dari mata kuliah yang saya ambil pada semester ke-3 sampai 4.
Memilih tema ini untuk tugas besar karena menurut saya permainan domino sangat umum dan banyak digemari oleh seluruh kalangan.
Tema ini menarik karena menunjukan cara lain dalam memainkan domino yaitu, menggunakan algoritma brute force dan greedy.
Apakah bisa diselesaikan? dan Bagaimana caranya? Menarik bukan, mari kita lihat metode nya!

Metode yang digunakan pada permainan domino ini ialah algoritma dasar yaitu algoritma Brute Force dan algoritma Greedy.

Penerapan algoritma Greedy pada permainan ini adalah mengeluarkan domino 
yang bernilai terbesar sehingga diakhir diharapkan solus optimal, yaitu domino kita 
habis, atau jika tidak, akan didapatkan paling sedikit nilai kartu domino yang 
tertinggal. Kami akan melihat contoh peng-aplikasi-an langsung dari permainan domino 
ini dengan menggunakan kedua algoritma yang sudah disebutkan sebelumnya. 
Ketika permainan sedang berlangsung dan kartu domino yang kita miliki sudah 
digunakan beberapa. Maka akan diperoleh hasil yang berbeda dengan dua 
kemungkinan menggunakan kedua dari algoritma tersebut kedua algoritma tersebut.
Misalkan kartuPenerima yang tersedia adalah 2, 4, dan 5. Kartu yang kita 
punya(kartuMasukan) ada yang bernilai 4, 5, 4, 3, dan 6. Maka, yang akan 
dikeluarkan dan yang mungkin adalah kartu yang bernilai 4 dan 5. karena metode 
yang digunakan adalah Brute Force, maka masukan kita tidak harus 4 atasu 5 yang 
dahulu. Tetapi tergantung pemain. Demikian pula selanjutnya untuk 
persimpanganpersimpangan yang lain. Pemain hanya harus mengeluarkan sebuah 
kartu berapapun nilainya, asal cocok, maka permainan dilanjutkan hingga pemain 
telah kehabisan seluruh kartunya atau tidak ada lagi kartu yang dapat dikeluarkan. 
