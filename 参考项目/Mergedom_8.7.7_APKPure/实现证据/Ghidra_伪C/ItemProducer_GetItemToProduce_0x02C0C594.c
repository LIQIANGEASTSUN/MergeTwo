
void Recovered_ItemProducer_GetItemToProduce_0x02C0C594(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  if ((bRam0000000006812bdc & 1) == 0) {
    func_0x02ad6de0(PTR_DAT_063fd090);
    func_0x02ad6de0(PTR_DAT_063fd098);
    func_0x02ad6de0(PTR_DAT_063fd0a0);
    func_0x02ad6de0(PTR_DAT_063fd0a8);
    func_0x02ad6de0(PTR_DAT_063fd0b0);
    func_0x02ad6de0(PTR_DAT_063fd0b8);
    func_0x02ad6de0(PTR_DAT_063fd0c0);
    bRam0000000006812bdc = 1;
  }
  puVar3 = PTR_DAT_063fd0c0;
  if (*(long *)(param_1 + 0x40) != 0) {
    lVar7 = *(long *)(*(long *)(param_1 + 0x40) + 0x48);
    lVar4 = *(long *)PTR_DAT_063fd0c0;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      func_0x02ad6f5c();
      lVar4 = *(long *)puVar3;
    }
    puVar2 = PTR_DAT_063fd098;
    puVar1 = PTR_DAT_063fd090;
    puVar6 = *(undefined8 **)(lVar4 + 0xb8);
    lVar8 = puVar6[1];
    if (lVar8 == 0) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        func_0x02ad6f5c();
        puVar6 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
      }
      uVar9 = *puVar6;
      lVar8 = func_0x02ad7078(*(undefined8 *)PTR_DAT_063fd0a0);
      func_0x04db7a80(lVar8,uVar9,*(undefined8 *)PTR_DAT_063fd0b8,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
      *plVar5 = lVar8;
      func_0x02ad6d8c(plVar5,lVar8);
    }
    uVar9 = func_0x0353c000(lVar7,lVar8,*(undefined8 *)puVar1);
    uVar9 = func_0x0354c348(uVar9,*(undefined8 *)puVar2);
    if (*(long *)(param_1 + 0x40) != 0) {
      if (*(char *)(*(long *)(param_1 + 0x40) + 0x45) != '\0') {
        TailTarget_350ba74(uVar9,lVar7,*(undefined8 *)PTR_DAT_063fd0b0);
        return;
      }
      if (lVar7 != 0) {
        TailTarget_3b28b60(lVar7,0,*(undefined8 *)PTR_DAT_063fd0a8);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NullReferenceThrowHelper();
}

