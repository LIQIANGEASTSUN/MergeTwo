
undefined8 Exact_OrdererItemProducer_GetItemToProduce_0x2c0e608(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((bRam0000000006812bee & 1) == 0) {
    func_0x02ad6de0(PTR_DAT_063fd010);
    func_0x02ad6de0(PTR_DAT_063fd0a8);
    bRam0000000006812bee = 1;
  }
  lVar3 = *(long *)(param_1 + 0x40);
  if ((lVar3 != 0) && (lVar1 = *(long *)(lVar3 + 0x48), lVar1 != 0)) {
    if (*(int *)(param_1 + 0xd4) < *(int *)(lVar1 + 0x18)) {
      uVar2 = TailTarget_3b28b60(lVar1,*(int *)(param_1 + 0xd4),*(undefined8 *)PTR_DAT_063fd0a8);
      *(int *)(param_1 + 0xd4) = *(int *)(param_1 + 0xd4) + 1;
    }
    else {
      if (*(char *)(lVar3 + 0x47) != '\0') {
        uVar2 = Recovered_ItemProducer_GetItemToProduce_0x02C0C594(param_1);
        return uVar2;
      }
      uVar2 = 0;
    }
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  NullReferenceThrowHelper();
}

