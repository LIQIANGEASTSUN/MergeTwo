/* Ghidra 12.1.2 native pseudocode; RVA 0x613F4B8; MergeEngine.Model.Configuration.MergingConfigurationModel.GetMergeItemFromComponent; status ok */


ulong MergeEngine_Model_Configuration_MergingConfigurationModel__GetMergeItemFromComponent
                (long *param_1,long *param_2,ulong param_3)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 in_x7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  code *pcVar15;
  undefined8 uVar16;
  long *plStack_48;
  code *pcStack_40;
  long *plStack_38;
  long *plStack_30;
  long *plStack_28;
  
  if ((bRam0000000007e245b8 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e5a8);
    func_0x03280a18(PTR_DAT_077ceda0);
    bRam0000000007e245b8 = 1;
  }
  plVar12 = (long *)param_1[6];
  if (plVar12 != (long *)0x0) {
    lVar8 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_077ceda0) {
          puVar4 = (undefined8 *)(lVar8 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_0623f554;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(plVar12,*(long *)PTR_DAT_077ceda0,2);
LAB_0623f554:
    param_3 = puVar4[1];
    uVar10 = (*(code *)*puVar4)(plVar12,param_2);
    if (uVar10 != 0) {
      return uVar10;
    }
    if (param_2 != (long *)0x0) {
      lVar8 = *param_2;
      plVar12 = *(long **)PTR_DAT_0777e5a8;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      param_3 = (ulong)*(ushort *)(plVar12 + 10);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == plVar12[4]) {
            lVar8 = lVar8 + (long)(int)(*piVar11 + (uint)*(ushort *)(plVar12 + 10)) * 0x10 + 0x138;
            goto LAB_0623f5d4;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      lVar8 = func_0x03256b10(param_2);
LAB_0623f5d4:
      lVar8 = func_0x03280b88(*(undefined8 *)(lVar8 + 8),plVar12);
      lVar8 = (**(code **)(lVar8 + 8))(param_2,lVar8);
      if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0623f610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar10 = (**(code **)(*param_1 + 0x4e8))
                           (param_1,*(undefined8 *)(lVar8 + 0x30),*(undefined8 *)(*param_1 + 0x4f0))
        ;
        return uVar10;
      }
    }
  }
  auVar13 = func_0x03280cac();
  pcStack_40 = MergeEngine_Model_Configuration_MergingConfigurationModel__GetLastItemInGraph;
  plStack_38 = plVar12;
  plStack_30 = param_2;
  plStack_28 = param_1;
  if ((bRam0000000007e245b9 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777c248);
    func_0x03280a18(PTR_DAT_0777e508);
    func_0x03280a18(PTR_DAT_0777e510);
    bRam0000000007e245b9 = 1;
  }
  plVar12 = (long *)MergeEngine_Model_Configuration_MergingConfigurationModel__GetGraph
                              (auVar13._0_8_,auVar13._8_8_);
  puVar1 = PTR_DAT_0777c248;
  if (plVar12 == (long *)0x0) {
    return 0;
  }
  lVar8 = *plVar12;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0777c248) {
        puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_0623f6d4;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  param_3 = 0;
  puVar4 = (undefined8 *)func_0x03256b10(plVar12);
LAB_0623f6d4:
  lVar8 = (*(code *)*puVar4)(plVar12,puVar4[1]);
  lVar9 = *plVar12;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
        puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_0623f730;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  param_3 = 0;
  puVar4 = (undefined8 *)func_0x03256b10(plVar12);
LAB_0623f730:
  lVar9 = (*(code *)*puVar4)(plVar12,puVar4[1]);
  if ((lVar9 != 0) && (lVar8 != 0)) {
    uVar7 = *(undefined8 *)PTR_DAT_0777e510;
    uVar2 = *(int *)(lVar9 + 0x18) - 1;
    if (*(uint *)(lVar8 + 0x18) <= uVar2) {
      func_0x057b8434(0);
    }
    lVar8 = *(long *)(lVar8 + 0x10);
    if (lVar8 == 0) {
      func_0x03280cac();
    }
    else if (uVar2 < *(uint *)(lVar8 + 0x18)) {
      return *(ulong *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
    }
    auVar14 = func_0x03280cb4();
    uVar6 = auVar14._8_4_;
    lVar8 = auVar14._0_8_;
    plStack_48 = (long *)(ulong)uVar2;
    if (*(uint *)(lVar8 + 0x18) <= uVar6) {
      func_0x057b8434(0);
    }
    lVar9 = *(long *)(lVar8 + 0x10);
    if (lVar9 == 0) {
      func_0x03280cac();
    }
    else if (uVar6 < *(uint *)(lVar9 + 0x18)) {
      puVar4 = (undefined8 *)(lVar9 + (long)(int)uVar6 * 8 + 0x20);
      *puVar4 = uVar7;
      uVar10 = func_0x032809c4(puVar4,uVar7);
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      return uVar10;
    }
    auVar13 = func_0x03280cb4();
    lVar8 = *(long *)(auVar13._8_8_ + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = func_0x0325681c(lVar8);
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x48);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = func_0x0325681c(lVar8);
    }
    lVar8 = func_0x03280b90(auVar13._0_8_,lVar8);
    if (lVar8 == 0) {
      uVar10 = (ulong)(auVar13._0_8_ == 0);
    }
    else {
      uVar10 = 1;
    }
    return uVar10;
  }
  auVar13 = func_0x03280cac();
  uVar7 = auVar13._8_8_;
  pcVar15 = MergeEngine_Model_Configuration_MergingConfigurationModel__GetGraph;
  uVar16 = 0x7e24000;
  plStack_48 = plVar12;
  if ((bRam0000000007e245c0 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776dcd8);
    func_0x03280a18(PTR_DAT_077db398);
    func_0x03280a18(PTR_DAT_077db3a0);
    func_0x03280a18(PTR_DAT_077db3a8);
    func_0x03280a18(PTR_DAT_077db2d8);
    func_0x03280a18(PTR_DAT_077503b8);
    bRam0000000007e245c0 = 1;
  }
  uVar10 = func_0x0623dde8(auVar13._0_8_,uVar7);
  if ((uVar10 & 1) == 0) {
    uVar7 = func_0x055ea7a0(*(undefined8 *)PTR_DAT_077db3a8,uVar7,0);
    if (*(int *)(*(long *)PTR_DAT_0776dcd8 + 0xe0) == 0) {
      func_0x03280b8c(*(long *)PTR_DAT_0776dcd8);
    }
    func_0x0556c434(uVar7,*(undefined8 *)PTR_DAT_077503b8,0,*(undefined8 *)PTR_DAT_077db2d8,
                    *(undefined8 *)PTR_DAT_077db3a0,0,0,in_x7,pcVar15,uVar16,lVar8);
    return 0;
  }
  lVar8 = *(long *)(auVar13._0_8_ + 0x50);
  if (lVar8 != 0) {
    plStack_48 = (long *)0x0;
    lVar8 = *(long *)(lVar8 + 0x10);
    plVar12 = (long *)0x0;
    if (lVar8 != 0) {
      func_0x04fe48b0(lVar8,uVar7,&plStack_48,
                      *(undefined8 *)
                       (*(long *)(*(long *)(*(long *)PTR_DAT_077db398 + 0x20) + 0xc0) + 0xf8));
      plVar12 = plStack_48;
    }
    return (ulong)plVar12;
  }
  auVar13 = func_0x03280cac();
  if ((bRam0000000007e245ba & 1) == 0) {
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_07763de8);
    bRam0000000007e245ba = 1;
  }
  plVar12 = (long *)func_0x0623e2ec(auVar13._0_8_,auVar13._8_8_);
  if (plVar12 == (long *)0x0) {
    uVar2 = 1;
  }
  else {
    lVar8 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07779820) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0623f944;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(plVar12,*(long *)PTR_DAT_07779820,0);
LAB_0623f944:
    uVar7 = (*(code *)*puVar4)(plVar12,puVar4[1]);
    if (param_3 == 0) {
      auVar13 = func_0x03280cac();
      plVar12 = auVar13._0_8_;
      if ((bRam0000000007e245bb & 1) == 0) {
        func_0x03280a18(PTR_DAT_07779820);
        bRam0000000007e245bb = 1;
      }
      plVar5 = (long *)MergeEngine_Model_Configuration_MergingConfigurationModel__GetMergeItemFromComponent
                                 (plVar12,auVar13._8_8_);
      if (plVar5 == (long *)0x0) {
        auVar13 = func_0x03280cac();
        plVar12 = auVar13._0_8_;
        if ((bRam0000000007e245bc & 1) == 0) {
          func_0x03280a18(PTR_DAT_0777c248);
          func_0x03280a18(PTR_DAT_077db338);
          bRam0000000007e245bc = 1;
        }
        plVar5 = (long *)(**(code **)(*plVar12 + 0x4d8))
                                   (plVar12,auVar13._8_8_,*(undefined8 *)(*plVar12 + 0x4e0));
        if (plVar5 != (long *)0x0) {
          lVar8 = *plVar5;
          uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0777c248) {
                puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_0623fb00;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar4 = (undefined8 *)func_0x03256b10(plVar5,*(long *)PTR_DAT_0777c248,0);
LAB_0623fb00:
          lVar8 = (*(code *)*puVar4)(plVar5,puVar4[1]);
          uVar7 = (**(code **)(*plVar12 + 0x4e8))
                            (plVar12,auVar13._8_8_,*(undefined8 *)(*plVar12 + 0x4f0));
          if (lVar8 != 0) {
            iVar3 = func_0x04145210(lVar8,uVar7,*(undefined8 *)PTR_DAT_077db338);
            return (ulong)(iVar3 + 1);
          }
        }
        func_0x03280cac();
        lVar8 = func_0x0623e2ec();
        return (ulong)(lVar8 == 0);
      }
      lVar8 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07779820) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0623fa20;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(plVar5,*(long *)PTR_DAT_07779820,0);
LAB_0623fa20:
      uVar7 = (*(code *)*puVar4)(plVar5,puVar4[1]);
                    /* WARNING: Could not recover jumptable at 0x0623fa48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar10 = (**(code **)(*plVar12 + 0x4d8))(plVar12,uVar7,*(undefined8 *)(*plVar12 + 0x4e0));
      return uVar10;
    }
    uVar2 = func_0x041447fc(param_3,uVar7,*(undefined8 *)PTR_DAT_07763de8);
    uVar2 = uVar2 ^ 1;
  }
  return (ulong)(uVar2 & 1);
}

