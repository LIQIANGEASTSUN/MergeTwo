
bool Recovered_ItemIdExtensions_IsSame_0x2bfe138(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0x30);
    if (cRam0000000006812711 == '\0') {
      func_0x02ad6de0(PTR_DAT_063f13f8);
      cRam0000000006812711 = '\x01';
    }
    puVar4 = PTR_DAT_063f13f8;
    if (*(int *)(*(long *)PTR_DAT_063f13f8 + 0xe4) == 0) {
      func_0x02ad6f5c();
    }
    if (param_2 != 0) {
      iVar3 = *(int *)(param_2 + 0x30);
      if (cRam0000000006812711 == '\0') {
        func_0x02ad6de0(PTR_DAT_063f13f8);
        cRam0000000006812711 = '\x01';
      }
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        func_0x02ad6f5c();
      }
      iVar1 = -iVar2;
      if (-1 < iVar2) {
        iVar1 = iVar2;
      }
      iVar2 = -iVar3;
      if (-1 < iVar3) {
        iVar2 = iVar3;
      }
      return iVar1 == iVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  NullReferenceThrowHelper();
}

