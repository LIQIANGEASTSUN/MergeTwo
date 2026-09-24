
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_ItemProducer_TryProduce_0x02C09E9C(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  int *piVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if ((bRam0000000006812bd6 & 1) == 0) {
    func_0x02ad6de0(PTR_DAT_063f27e0);
    func_0x02ad6de0(PTR_DAT_063fd000);
    func_0x02ad6de0(PTR_DAT_063f0dd0);
    func_0x02ad6de0(PTR_DAT_063f9ed8);
    func_0x02ad6de0(PTR_DAT_063fd008);
    func_0x02ad6de0(PTR_DAT_063fd010);
    func_0x02ad6de0(PTR_DAT_063f0f18);
    func_0x02ad6de0(PTR_DAT_063fd018);
    func_0x02ad6de0(PTR_DAT_063fd020);
    bRam0000000006812bd6 = 1;
  }
  lVar9 = param_1[0xe];
  *(undefined1 *)((long)param_1 + 0xba) = 0;
  if (lVar9 == 0) goto LAB_02d0a2b8;
  if ((*(int *)(lVar9 + 0x20) != 2) || (*(int *)(lVar9 + 0x7c) != 0)) {
    lVar9 = *param_1;
    uVar8 = 2;
LAB_02d09f5c:
                    /* WARNING: Could not recover jumptable at 0x02d09f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar9 + 0x178))(param_1,uVar8,*(undefined8 *)(lVar9 + 0x180));
    return;
  }
  uVar5 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
  if (((uVar5 & 1) != 0) && (iVar3 = func_0x02cb5d18(0), iVar3 == 0)) {
    if (param_1[0x11] == 0) goto LAB_02d0a2b8;
    if (*(char *)(param_1[0x11] + 0x10) == '\0') {
      lVar9 = param_1[0xd];
      uVar8 = func_0x02ad7078(*(undefined8 *)PTR_DAT_063f27e0);
      func_0x05162528(uVar8,param_1,*(undefined8 *)PTR_DAT_063fd008,0);
      func_0x02e93f40(_UNK_01183628,lVar9,uVar8,0);
      return;
    }
  }
  puVar1 = PTR_DAT_063f0e18;
  if ((param_1[8] == 0) || (lVar9 = *(long *)(param_1[8] + 0x48), lVar9 == 0)) goto LAB_02d0a2b8;
  if ((*(int *)(lVar9 + 0x18) == 0) || ((int)param_1[6] == 0)) {
    lVar9 = *param_1;
    uVar8 = 1;
    goto LAB_02d09f5c;
  }
  lVar9 = param_1[0xd];
  if ((lVar9 == 0) || (*(long *)(lVar9 + 0x50) == 0)) {
LAB_02d0a2b8:
                    /* WARNING: Subroutine does not return */
    NullReferenceThrowHelper();
  }
  uStack_34 = *(undefined4 *)(*(long *)(lVar9 + 0x50) + 0x30);
  plVar13 = (long *)param_1[4];
  uVar14 = *(undefined8 *)(lVar9 + 0x58);
  uVar8 = func_0x02ad6f64(*(undefined8 *)(PTR_DAT_063f0e18 + 0x48),&uStack_34);
  if (param_1[0xd] == 0) goto LAB_02d0a2b8;
  uStack_38 = *(undefined4 *)(param_1[0xd] + 0x44);
  uVar6 = func_0x02ad6f64(*(undefined8 *)(puVar1 + 0x48),&uStack_38);
  uVar8 = func_0x05076ef4(*(undefined8 *)PTR_DAT_063fd018,uVar8,uVar6,0);
  uVar4 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
  puVar1 = PTR_DAT_063f9ed8;
  if (plVar13 == (long *)0x0) goto LAB_02d0a2b8;
  lVar9 = *plVar13;
  uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar5 != 0) {
    piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_063f9ed8) {
        puVar7 = (undefined8 *)(lVar9 + (long)(*piVar12 + 9) * 0x10 + 0x138);
        goto LAB_02d0a0bc;
      }
      uVar5 = uVar5 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar5 != 0);
  }
  puVar7 = (undefined8 *)func_0x02b0e364(plVar13,*(long *)PTR_DAT_063f9ed8,9);
LAB_02d0a0bc:
  lVar9 = (*(code *)*puVar7)(plVar13,uVar14,uVar8,uVar4,puVar7[1]);
  puVar2 = PTR_DAT_063f0f18;
  if (*(int *)(*(long *)PTR_DAT_063f0f18 + 0xe4) == 0) {
    func_0x02ad6f5c(*(long *)PTR_DAT_063f0f18);
  }
  uVar5 = func_0x05c4a644(lVar9,0);
  if ((uVar5 & 1) == 0) {
    lVar10 = *param_1;
  }
  else {
    if (lVar9 == 0) goto LAB_02d0a2b8;
    lVar10 = *param_1;
    if (*(char *)(lVar9 + 0x2c) != '\0') {
      lVar10 = (**(code **)(lVar10 + 0x1f8))(param_1,*(undefined8 *)(lVar10 + 0x200));
      if (lVar10 != 0) {
        if (((*(long *)(lVar10 + 0x10) != 0) && (param_1[0xd] != 0)) && (param_1[8] != 0)) {
          uVar8 = Recovered_Producer_Produce_0x2c0b430
                            (param_1,*(undefined4 *)(*(long *)(lVar10 + 0x10) + 0x30),
                             *(undefined4 *)(lVar10 + 0x18),*(undefined8 *)(param_1[0xd] + 0x58),
                             lVar9,*(undefined1 *)(param_1[8] + 0x44));
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            func_0x02ad6f5c(*(long *)puVar2);
          }
          uVar5 = func_0x05c42ddc(uVar8,0,0);
          if ((uVar5 & 1) != 0) {
            if (param_1[4] == 0) goto LAB_02d0a2b8;
            lVar9 = param_1[0xd];
            uVar8 = func_0x027a9964(0xe,*(undefined8 *)puVar1,param_1[4],0);
            uVar5 = func_0x02d69980(lVar9,uVar8,0);
            if ((uVar5 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_063f0dd0 + 0xe4) == 0) {
                func_0x02ad6f5c();
              }
              func_0x05bfc324(*(undefined8 *)PTR_DAT_063fd020,0);
            }
          }
          if ((param_1[0xd] != 0) && (lVar9 = *(long *)(param_1[0xd] + 0x50), lVar9 != 0)) {
            uVar4 = *(undefined4 *)(lVar9 + 0x30);
            if (*(int *)(*(long *)PTR_DAT_063fd000 + 0xe4) == 0) {
              func_0x02ad6f5c();
            }
            func_0x02e67604(uVar4,0);
            Recovered_ItemProducer_TryProduceActivityItem_0x2c0b7ac(param_1);
            return;
          }
        }
        goto LAB_02d0a2b8;
      }
      uVar14 = 1;
      pcVar11 = *(code **)(*param_1 + 0x178);
      uVar8 = *(undefined8 *)(*param_1 + 0x180);
      goto LAB_02d0a234;
    }
  }
  pcVar11 = *(code **)(lVar10 + 0x178);
  uVar8 = *(undefined8 *)(lVar10 + 0x180);
  uVar14 = 0;
LAB_02d0a234:
  (*pcVar11)(param_1,uVar14,uVar8);
  return;
}

