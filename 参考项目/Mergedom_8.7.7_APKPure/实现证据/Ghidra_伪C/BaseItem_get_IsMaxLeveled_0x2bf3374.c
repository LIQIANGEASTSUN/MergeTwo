
bool Recovered_BaseItem_get_IsMaxLeveled_0x2bf3374(long param_1)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  
  if ((bRam0000000006812b0a & 1) == 0) {
    func_0x02ad6de0(PTR_DAT_063fa0a0);
    func_0x02ad6de0(PTR_DAT_063fa170);
    bRam0000000006812b0a = 1;
  }
  if (*(long *)(param_1 + 0x50) == 0) {
LAB_02cf340c:
                    /* WARNING: Subroutine does not return */
    NullReferenceThrowHelper();
  }
  iVar1 = *(int *)(*(long *)(param_1 + 0x50) + 0x30);
  if (*(int *)(*(long *)PTR_DAT_063fa0a0 + 0xe4) == 0) {
    func_0x02ad6f5c();
  }
  if (iVar1 < 0) {
    bVar2 = false;
  }
  else {
    if ((*(long *)(param_1 + 0x50) == 0) ||
       (lVar3 = *(long *)(*(long *)(param_1 + 0x50) + 0x58), lVar3 == 0)) goto LAB_02cf340c;
    bVar2 = *(int *)(param_1 + 0x44) == *(int *)(lVar3 + 0x18);
  }
  return bVar2;
}

