
bool Recovered_ItemId_IsBooster_0x2bfda04(int param_1)

{
  undefined *puVar1;
  bool bVar2;
  
  puVar1 = PTR_DAT_063fa0a0;
  if ((bRam0000000006812b88 & 1) == 0) {
    func_0x02ad6de0(PTR_DAT_063fa0a0);
    bRam0000000006812b88 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    func_0x02ad6f5c();
  }
  if (param_1 == 0xca) {
    bVar2 = true;
  }
  else {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      func_0x02ad6f5c();
    }
    bVar2 = param_1 == 0xcb;
  }
  return bVar2;
}

