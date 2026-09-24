
void Recovered_ItemMerger_Merge_0x02C033A0
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 auStack_f0 [2];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 auStack_a8 [11];
  
  puVar1 = PTR_DAT_063fcd78;
  if ((bRam0000000006812b9e & 1) == 0) {
    func_0x02ad6de0(PTR_DAT_063fcd78);
    bRam0000000006812b9e = 1;
  }
  func_0x06026720(auStack_f0,0,0xa0);
  func_0x0511a4f0(&uStack_110,0);
  uStack_e0 = uStack_108;
  uStack_e8 = uStack_110;
  uStack_d0 = uStack_f8;
  uStack_d8 = uStack_100;
  func_0x02ad6d8c(&uStack_e8,0);
  auStack_a8[0] = param_1;
  func_0x02ad6d8c(auStack_a8,param_1);
  uStack_c8 = param_2;
  func_0x02ad6d8c(&uStack_c8,param_2);
  uStack_b0 = param_3;
  func_0x02ad6d8c(&uStack_b0,param_3);
  uStack_b8 = param_4;
  func_0x02ad6d8c(&uStack_b8,param_4);
  uStack_c0 = param_5;
  func_0x02ad6d8c(&uStack_c0,param_5);
  auStack_f0[0] = 0xffffffff;
  func_0x0343e1b4(&uStack_e8,auStack_f0,*(undefined8 *)puVar1);
  return;
}

