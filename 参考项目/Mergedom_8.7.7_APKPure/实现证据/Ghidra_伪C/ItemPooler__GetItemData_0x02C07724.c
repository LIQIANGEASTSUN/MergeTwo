
undefined8 Recovered_ItemPooler__GetItemData_0x02C07724(long param_1,uint param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uStack_24;
  
  if ((bRam0000000006812bbb & 1) == 0) {
    func_0x02ad6de0(PTR_DAT_063f0dd0);
    func_0x02ad6de0(PTR_DAT_063f6080);
    func_0x02ad6de0(PTR_DAT_063fcf70);
    func_0x02ad6de0(PTR_DAT_063f6088);
    func_0x02ad6de0(PTR_DAT_063fcf78);
    func_0x02ad6de0(PTR_DAT_063f0de0);
    func_0x02ad6de0(PTR_DAT_063fcf80);
    bRam0000000006812bbb = 1;
  }
  uVar1 = param_2;
  if ((param_3 & 1) == 0) {
    if (cRam0000000006812711 == '\0') {
      func_0x02ad6de0(PTR_DAT_063f13f8);
      cRam0000000006812711 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_063f13f8 + 0xe4) == 0) {
      func_0x02ad6f5c();
    }
    uVar1 = -param_2;
    if (-1 < (int)param_2) {
      uVar1 = param_2;
    }
  }
  if ((*(long *)(param_1 + 0x38) == 0) ||
     (lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 0x40), lVar2 == 0)) goto LAB_02d07924;
  uVar3 = func_0x049ab620(lVar2,uVar1,*(undefined8 *)PTR_DAT_063fcf70);
  if ((uVar3 & 1) == 0) {
    if ((*(long *)(param_1 + 0x38) == 0) ||
       (lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 0x58), lVar2 == 0)) goto LAB_02d07924;
    uVar3 = func_0x049a1d70(lVar2,uVar1,*(undefined8 *)PTR_DAT_063f6080);
    if ((uVar3 & 1) == 0) {
      uStack_24 = uVar1;
      uVar4 = func_0x02ad6f64(*(undefined8 *)(PTR_DAT_063f0e18 + 0x48),&uStack_24);
      uVar4 = func_0x0506c770(*(undefined8 *)PTR_DAT_063fcf80,uVar4,0);
      uVar5 = func_0x02ad7078(*(undefined8 *)PTR_DAT_063f0de0);
      func_0x05244dac(uVar5,uVar4,0);
      if (*(int *)(*(long *)PTR_DAT_063f0dd0 + 0xe4) == 0) {
        func_0x02ad6f5c();
      }
      func_0x05bf7408(uVar5,0);
      return 0;
    }
    if ((*(long *)(param_1 + 0x38) == 0) ||
       (lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 0x58), lVar2 == 0)) goto LAB_02d07924;
    uVar1 = func_0x049a1ae8(lVar2,uVar1,*(undefined8 *)PTR_DAT_063f6088);
  }
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 0x40), lVar2 != 0)) {
    uVar4 = func_0x049ab38c(lVar2,uVar1,*(undefined8 *)PTR_DAT_063fcf78);
    return uVar4;
  }
LAB_02d07924:
                    /* WARNING: Subroutine does not return */
  NullReferenceThrowHelper();
}

