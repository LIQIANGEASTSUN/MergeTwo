
void Recovered_BoardSlot_SetItem_0x02B9F90C(long param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_063f0f18;
  if ((bRam00000000068128ca & 1) == 0) {
    func_0x02ad6de0(PTR_DAT_063f0f18);
    bRam00000000068128ca = 1;
  }
  plVar4 = (long *)(param_1 + 0x30);
  *plVar4 = param_2;
  func_0x02ad6d8c(plVar4,param_2);
  lVar5 = *plVar4;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    func_0x02ad6f5c();
  }
  uVar2 = func_0x05c4a644(lVar5,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*plVar4 != 0) {
    func_0x02cf3f9c(*plVar4,param_1,0);
    if ((param_3 & 1) == 0) {
      return;
    }
    if ((*plVar4 != 0) && (lVar5 = *(long *)(*plVar4 + 0x60), lVar5 != 0)) {
      func_0x02d48508(lVar5,*(undefined4 *)(param_1 + 0x28),0);
      if (*(long *)(param_1 + 0x30) != 0) {
        lVar5 = func_0x05c3f95c(*(long *)(param_1 + 0x30),0);
        lVar3 = func_0x05c3f95c(param_1,0);
        if ((lVar3 != 0) && (func_0x05c54030(lVar3,0), lVar5 != 0)) {
          func_0x05c5410c(lVar5,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NullReferenceThrowHelper();
}

