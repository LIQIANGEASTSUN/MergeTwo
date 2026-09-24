
void Recovered_BoardSlot_SetLock_0x02B9FA14(long param_1,byte param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((bRam00000000068128c9 & 1) == 0) {
    func_0x02ad6de0(PTR_DAT_063f0f18);
    bRam00000000068128c9 = 1;
  }
  *(byte *)(param_1 + 0x2d) = param_2 & 1;
  puVar1 = PTR_DAT_063f0f18;
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x05c44378(*(long *)(param_1 + 0x38),param_2 & 1,0);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      func_0x02ad6f5c();
    }
    uVar2 = func_0x05c4a644(uVar4,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if ((*(long *)(param_1 + 0x30) != 0) &&
       (lVar3 = func_0x05c3fa2c(*(long *)(param_1 + 0x30),0), lVar3 != 0)) {
      func_0x05c44378(lVar3,(param_2 ^ 0xff) & 1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  NullReferenceThrowHelper();
}

