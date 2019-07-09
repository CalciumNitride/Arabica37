# build guide
自作キーボードキット Arabica3/7のビルドガイドです

## Parts

### キット内容物

名称| 数量 | 備考 |
----|----:|:----:|
PCB             |　2 | リバーシブル
スイッチプレート  | 2|"
ボトムプレート   | 2|"
Promicroカバー|2|"
TRRSジャック     |2|
タクトスイッチ    |2|リセットスイッチ用
スペーサ M2 8mm   |18|
ネジ M2          |36|
ダイオード       |44|スルーホール

### 別途用意する必要のあるもの

名称| 数量 | 備考 |
----|----:|:----:|
キースイッチ|44|MX互換もしくはKailh choc
Kailh PCBソケット|44|キースイッチに合うもの
キーキャップ 1U |44|キースイッチに合うもの
ProMicro|2|コンスルー使用可
スタビライザー|2|小指キー用
USBケーブル|1|
TRRSケーブル|1|


### オプション
名称| 数量 | 備考 |
----|----:|:----:|
ダイオード(チップ)|44|1N4148Wに対応
デジタルLEDテープ|2|Underglow用
配線材|3|Underglow LED用
OLEDモジュール|2|
4pinピンヘッダ|2|OLED用
4pinピンソケット|2|OLED用  


## 組み立て

PCBはリバーシブルです。どちらを左/右にしてもかまいません  
基本的に左右の実装は同じですが、Pro microの位置は間違え安いので注意してください

### 1.ダイオードを半田付けする

PCBの裏面にダイオードを半田付けします。
ダイオードの足を折り曲げ、PCBに差し込みます。このとき、ダイオードの黒い印がある側(マイナス)がPCB上の四角いパッドに来るようにします。

![2019-07-05 001](https://user-images.githubusercontent.com/46911478/60859507-ea624100-a24d-11e9-8f30-38719db1eba7.JPG)

![diode01](https://user-images.githubusercontent.com/46911478/60717401-a2e16980-9f5c-11e9-9c77-8489db1e3366.JPG)

ひっくり返して半田付けします。

![diode02](https://user-images.githubusercontent.com/46911478/60716958-9d375400-9f5b-11e9-93eb-6c2eda3b54cb.JPG)

飛び出している足をニッパーで切ります。

![diode03](https://user-images.githubusercontent.com/46911478/60717536-0b304b00-9f5d-11e9-9482-989f406d5411.JPG)


※SMDのダイオードを使用する場合は[Corneのビルドガイド](https://github.com/foostan/crkbd/blob/master/corne-cherry/doc/buildguide_jp.md#ダイオード)等を参考にしてください。


### 2.OLEDモジュール用ジャンパ(オプション)

OLEDモジュールを使用する場合はPCBの __表側のみ__ 図のようにジャンパします

![2019-07-06 03](https://user-images.githubusercontent.com/46911478/60858177-41651780-a248-11e9-9bd5-d6d5af544b6b.jpg)


### 3.PCBソケットを半田付けする

PCBソケットをPCBの裏側に実装します。
ソケットは上がKailh choc用、下がMX互換用です。

まず、パッドにはんだを盛ります。
![socket01](https://user-images.githubusercontent.com/46911478/60717706-9c9fbd00-9f5d-11e9-8afa-5c9822ec0c4f.JPG)

次に、ソケットを載せ、側面からこて先をあてがって盛ったはんだを溶かし取り付けます。このとき、ソケットが浮かないようにピンセット等で押さえながら作業する必要があります。

![socket02](https://user-images.githubusercontent.com/46911478/60717664-6cf0b500-9f5d-11e9-8fcc-471f0a1a1e9c.png)

### 4.OLEDモジュール用ピンソケットを半田付けする(オプション)

ピンソケットをPCBの表側に半田付けします(OLEDを利用する場合のみ)

![2019-07-05 007](https://user-images.githubusercontent.com/46911478/60858215-68bbe480-a248-11e9-8296-a62e91c078e6.JPG)



### 5.タクトスイッチ、TRRSジャックを半田付けする

TRRSジャック、タクトスイッチはPCBの表側に実装します。

![2019-07-05 009](https://user-images.githubusercontent.com/46911478/60858427-3a8ad480-a249-11e9-8414-1f36c6d0b622.JPG)



### 6. ProMicroを実装する

ProMicro用ピンヘッダをPCBの表側に半田付けし、その上にProMicroを裏面(平たい方)を上にして半田付けします

※このとき、ピンヘッダをPCB上の白い枠に合わせて実装します。正しく取り付けられて入ればPCB上の"RAW"とProMicroの"RAW"が同じ位置(左上)になります。
※コンスルーを使用する場合は[Helixのビルドガイド](https://github.com/MakotoKurauchi/helix/blob/master/Doc/buildguide_jp.md#pro-micro)等を参考にしてください 

![2019-07-05 010](https://user-images.githubusercontent.com/46911478/60858488-7f167000-a249-11e9-9808-9ffa66967fd9.JPG)

![2019-07-05 011](https://user-images.githubusercontent.com/46911478/60858477-702fbd80-a249-11e9-9b7d-cf5fd167ddc8.JPG)

飛び出した足はニッパーで切り取ります。

### 7. OLEDモジュールを実装する(オプション)

OLEDモジュール用ピンヘッダをピンソケットに差し込みます。さらにその上にOLEDモジュールを載せ、ピンヘッダとOLEDモジュールを半田付けします。
Promicroカバーとの干渉を防ぐため飛び出した足を切り取る必要があります。

![2019-07-05 012](https://user-images.githubusercontent.com/46911478/60858570-dcaabc80-a249-11e9-989c-d766376f1d68.JPG)
　　　　　　　　　　　　　　　　　　　　　　　　　
### 8. Promicroカバー用スペーサーを取り付ける

ProMicro付近の穴にスペーサーを後ろからネジ止めします。

![2019-07-05 016](https://user-images.githubusercontent.com/46911478/60859230-bdf9f500-a24c-11e9-862e-58056a13145d.JPG)

### 9. スタビライザーをはめ込む

2Uキー用のスタビライザーをPCBにはめ込みます。プレートマウントのスタビライザーを使う場合はプレート側にはめ込みます。

※現行のv1.2基板ではPCBマウントタイプのスタビライザーがスペーサーと干渉します。PCBマウントのスタビライザーを使う場合はスイッチプレートを6箇所で固定してください。

![2019-07-05 019](https://user-images.githubusercontent.com/46911478/60858681-56db4100-a24a-11e9-8c31-19725342eac2.JPG)

### 10. プレートにスイッチをはめ込む

スイッチプレートにスイッチをはめ込みます。はじめに角の2箇所のみをはめます。(スイッチが抜けないようプレートは固めに設計されています。どうしてもスイッチが入らない場合は穴の側面を削ってください)

![2019-07-05 017](https://user-images.githubusercontent.com/46911478/60858696-6b1f3e00-a24a-11e9-994c-bcfaee09fde9.JPG)

### 11. プレートとPCBを合わせる

スイッチの足がPCBソケットにささるようにスイッチプレートとPCBを合わせます。

![2019-07-05 020](https://user-images.githubusercontent.com/46911478/60858845-01ebfa80-a24b-11e9-8ffe-472ec20d768c.JPG)

### 12. スイッチをはめ込む

残りのスイッチをはめ込みます。

![2019-07-05 022](https://user-images.githubusercontent.com/46911478/60859300-0b766200-a24d-11e9-9ec0-c702a455ebfd.JPG)

このとき、スイッチの足が曲がっているとソケットに刺さらず、折れてしまうので注意してください。

![2019-07-05 021](https://user-images.githubusercontent.com/46911478/60859399-77f16100-a24d-11e9-8d02-7840a16b263f.JPG)


### 13. Promicroカバーを取り付ける

Promicroカバーを取り付けます。Promicroカバー用のマイナスネジを使います。

![2019-07-05 023](https://user-images.githubusercontent.com/46911478/60858996-aff7a480-a24b-11e9-8497-8d6201d826ba.JPG)

### 14. ボトムプレートとスイッチプレートを合わせる

ボトムプレートにスペーサーを取り付けます。

![2019-07-09 001](https://user-images.githubusercontent.com/46911478/60859700-9efc6280-a24e-11e9-9fc6-7fbf43d4cb73.JPG)

スイッチプレートをボトムプレートに乗せてネジ止めします。

![2019-07-05 024](https://user-images.githubusercontent.com/46911478/60859805-d965ff80-a24e-11e9-8fe4-152fed529ca4.JPG)

### 15. キーキャップを取り付ける

キーキャップをはめます。

![2019-07-09 002](https://user-images.githubusercontent.com/46911478/60860080-e3d4c900-a24f-11e9-9075-a6d6599cb3e6.JPG)

お好みで[台座](https://github.com/CalciumNitride/Arabica37/tree/master/pedestal)やゴム足などをつけてチルト・安定化してください。

![2019-07-09 004](https://user-images.githubusercontent.com/46911478/60860274-c18f7b00-a250-11e9-8a84-7993f3347c29.JPG)
