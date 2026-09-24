
uint Recovered_BaseItem_CanMerge_0x02BF54DC(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  
  if ((bRam0000000006812b22 & 1) == 0) {
    func_0x02ad6de0(PTR_DAT_063fc5a8);
    func_0x02ad6de0(PTR_DAT_063fa4e8);
    func_0x02ad6de0(PTR_DAT_063fc6b8);
    bRam0000000006812b22 = 1;
  }
  puVar3 = PTR_DAT_063fc6b8;
  puVar2 = PTR_DAT_063fa4e8;
  lVar5 = *(long *)(param_1 + 0xb8);
  if (lVar5 != 0) {
    iVar7 = 0;
    while (iVar7 < *(int *)(lVar5 + 0x18)) {
      plVar6 = (long *)TailTarget_3b28b60(lVar5,iVar7,*(undefined8 *)puVar2);
      if (plVar6 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
        if ((bVar1 <= *(byte *)(*plVar6 + 0x130)) &&
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar3)) {
          uVar4 = 1;
          goto LAB_02cf55a4;
        }
      }
      lVar5 = *(long *)(param_1 + 0xb8);
      iVar7 = iVar7 + 1;
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        NullReferenceThrowHelper();
      }
    }
  }
  uVar4 = Recovered_BaseItem_get_IsMaxLeveled_0x2bf3374(param_1);
  uVar4 = uVar4 ^ 1;
LAB_02cf55a4:
  return uVar4 & 1;
}

