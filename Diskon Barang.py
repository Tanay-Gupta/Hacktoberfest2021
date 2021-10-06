import subprocess as sp
tmp = sp.call('cls', shell=True)

class Penjualan: #kelas penjualan
    """
    Kelas ini digunakan untuk mendefinisikan nama barang
    dan juga harga dari barang tersebut.
    """
    
    def __init__(self, nama, harga): #constructor berisi nama dan harga
        self.nama  = nama
        self.harga = harga
        
    def is_discount(self):    
        if float(self.harga) > 100000 : #jika harga lebih dari 100000
            pajak = float(self.harga) + (float(self.harga)*0.10) #harga + pajak 10%
            total = pajak - (pajak*0.05) #potongan diluar pajak sebesar 5%
            print ("\nTotal Harga            : "+str(total) + " (Harga + Pajak 10% dan potongan diluar Pajak sebesar 5%)") #total akhir harga
                
        else:
            total = float(self.harga) + (float(self.harga)*0.10) #harga + pajak 10%
            print ("\nTotal Harga            : "+str(total) + " (Harga + Pajak 10%)") #total akhir harga 

print("PROGRAM OOP SEDERHANA YANG DIGUNAKAN UNTUK MENGHITUNG DISKON HARGA BARANG\n\n")
print("Dengan Ketentuan : 1. Input Parameter pada class adalah Nama Barang dan Harga\n" +
      "                   2. Output berupa nilai biaya penjualan ditambah dengan total pajak 10%\n" + 
      "                      dari harga yang harus dibayarkan\n" +
      "                   3. Apabila total biaya penjualan suatu barang (tidak termasuk pajak) diatas 100.000\n"+ 
      "                      maka akan diberikan potongan (diluar pajak) sebesar 5% dari total biaya suatu barang.\n" +
      "                   4. Pada class yang dibuat terdapat bentuk dari constructor beserta method dalam melakukan kalkulasi\n\n")
lakubarang = Penjualan(
        
        nama =  input("Masukkan Nama Barang   : "), #input nama barang
        harga = input("Masukkan Harga Barang  : ") #input harga barang
        )
lakubarang.is_discount() #penentuan diskon barang
k=input("press close to exit") 