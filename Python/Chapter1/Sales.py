price_shirt = 25.00
price_jeans= 45.00
qty_shirt=2
qty_jeans=1
total_shirt=price_shirt*qty_shirt
total_jeans= price_jeans*qty_jeans
subtotal=total_shirt+total_jeans
print("subtotal:",subtotal)
discount= subtotal*0.01
print("discount:",discount)
final_total=subtotal-discount
print("final total:",final_total)
