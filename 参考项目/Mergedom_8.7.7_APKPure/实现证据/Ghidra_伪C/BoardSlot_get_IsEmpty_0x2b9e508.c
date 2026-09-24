
void Recovered_BoardSlot_get_IsEmpty_0x2b9e508(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_063f0f18;
  if ((bRam00000000068128c8 & 1) == 0) {
    func_0x02ad6de0(PTR_DAT_063f0f18);
    bRam00000000068128c8 = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    func_0x02ad6f5c();
  }
  func_0x05c465f8(uVar2,0,0);
  return;
}

