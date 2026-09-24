/* Ghidra 12.1.2 native pseudocode; RVA 0x613F618; MergeEngine.Model.Configuration.MergingConfigurationModel.GetLastItemInGraph; status ok */


ulong MergeEngine_Model_Configuration_MergingConfigurationModel__GetLastItemInGraph
                (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 in_x7;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  code *pcVar15;
  undefined8 uVar16;
  long *plStack_28;
  
  if ((bRam0000000007e245b9 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777c248);
    func_0x03280a18(PTR_DAT_0777e508);
    func_0x03280a18(PTR_DAT_0777e510);
    bRam0000000007e245b9 = 1;
  }
  plVar4 = (long *)MergeEngine_Model_Configuration_MergingConfigurationModel__GetGraph
                             (param_1,param_2);
  puVar1 = PTR_DAT_0777c248;
  if (plVar4 == (long *)0x0) {
    return 0;
  }
  lVar9 = *plVar4;
  uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0777c248) {
        puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_0623f6d4;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  param_3 = 0;
  puVar5 = (undefined8 *)func_0x03256b10(plVar4);
LAB_0623f6d4:
  lVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
  lVar10 = *plVar4;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
        puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_0623f730;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  param_3 = 0;
  puVar5 = (undefined8 *)func_0x03256b10(plVar4);
LAB_0623f730:
  lVar10 = (*(code *)*puVar5)(plVar4,puVar5[1]);
  if ((lVar10 != 0) && (lVar9 != 0)) {
    uVar8 = *(undefined8 *)PTR_DAT_0777e510;
    uVar2 = *(int *)(lVar10 + 0x18) - 1;
    if (*(uint *)(lVar9 + 0x18) <= uVar2) {
      func_0x057b8434(0);
    }
    lVar9 = *(long *)(lVar9 + 0x10);
    if (lVar9 == 0) {
      func_0x03280cac();
    }
    else if (uVar2 < *(uint *)(lVar9 + 0x18)) {
      return *(ulong *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
    }
    auVar14 = func_0x03280cb4();
    uVar7 = auVar14._8_4_;
    lVar9 = auVar14._0_8_;
    plStack_28 = (long *)(ulong)uVar2;
    if (*(uint *)(lVar9 + 0x18) <= uVar7) {
      func_0x057b8434(0);
    }
    lVar10 = *(long *)(lVar9 + 0x10);
    if (lVar10 == 0) {
      func_0x03280cac();
    }
    else if (uVar7 < *(uint *)(lVar10 + 0x18)) {
      puVar5 = (undefined8 *)(lVar10 + (long)(int)uVar7 * 8 + 0x20);
      *puVar5 = uVar8;
      uVar11 = func_0x032809c4(puVar5,uVar8);
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      return uVar11;
    }
    auVar13 = func_0x03280cb4();
    lVar9 = *(long *)(auVar13._8_8_ + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = func_0x0325681c(lVar9);
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x48);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = func_0x0325681c(lVar9);
    }
    lVar9 = func_0x03280b90(auVar13._0_8_,lVar9);
    if (lVar9 == 0) {
      uVar11 = (ulong)(auVar13._0_8_ == 0);
    }
    else {
      uVar11 = 1;
    }
    return uVar11;
  }
  auVar13 = func_0x03280cac();
  uVar8 = auVar13._8_8_;
  pcVar15 = MergeEngine_Model_Configuration_MergingConfigurationModel__GetGraph;
  uVar16 = 0x7e24000;
  plStack_28 = plVar4;
  if ((bRam0000000007e245c0 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776dcd8);
    func_0x03280a18(PTR_DAT_077db398);
    func_0x03280a18(PTR_DAT_077db3a0);
    func_0x03280a18(PTR_DAT_077db3a8);
    func_0x03280a18(PTR_DAT_077db2d8);
    func_0x03280a18(PTR_DAT_077503b8);
    bRam0000000007e245c0 = 1;
  }
  uVar11 = func_0x0623dde8(auVar13._0_8_,uVar8);
  if ((uVar11 & 1) == 0) {
    uVar8 = func_0x055ea7a0(*(undefined8 *)PTR_DAT_077db3a8,uVar8,0);
    if (*(int *)(*(long *)PTR_DAT_0776dcd8 + 0xe0) == 0) {
      func_0x03280b8c(*(long *)PTR_DAT_0776dcd8);
    }
    func_0x0556c434(uVar8,*(undefined8 *)PTR_DAT_077503b8,0,*(undefined8 *)PTR_DAT_077db2d8,
                    *(undefined8 *)PTR_DAT_077db3a0,0,0,in_x7,pcVar15,uVar16,lVar9);
    return 0;
  }
  lVar9 = *(long *)(auVar13._0_8_ + 0x50);
  if (lVar9 != 0) {
    plStack_28 = (long *)0x0;
    lVar9 = *(long *)(lVar9 + 0x10);
    plVar4 = (long *)0x0;
    if (lVar9 != 0) {
      func_0x04fe48b0(lVar9,uVar8,&plStack_28,
                      *(undefined8 *)
                       (*(long *)(*(long *)(*(long *)PTR_DAT_077db398 + 0x20) + 0xc0) + 0xf8));
      plVar4 = plStack_28;
    }
    return (ulong)plVar4;
  }
  auVar13 = func_0x03280cac();
  if ((bRam0000000007e245ba & 1) == 0) {
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_07763de8);
    bRam0000000007e245ba = 1;
  }
  plVar4 = (long *)func_0x0623e2ec(auVar13._0_8_,auVar13._8_8_);
  if (plVar4 == (long *)0x0) {
    uVar2 = 1;
  }
  else {
    lVar9 = *plVar4;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07779820) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0623f944;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(plVar4,*(long *)PTR_DAT_07779820,0);
LAB_0623f944:
    uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (param_3 == 0) {
      auVar13 = func_0x03280cac();
      plVar4 = auVar13._0_8_;
      if ((bRam0000000007e245bb & 1) == 0) {
        func_0x03280a18(PTR_DAT_07779820);
        bRam0000000007e245bb = 1;
      }
      plVar6 = (long *)func_0x0623f4b8(plVar4,auVar13._8_8_);
      if (plVar6 == (long *)0x0) {
        auVar13 = func_0x03280cac();
        plVar4 = auVar13._0_8_;
        if ((bRam0000000007e245bc & 1) == 0) {
          func_0x03280a18(PTR_DAT_0777c248);
          func_0x03280a18(PTR_DAT_077db338);
          bRam0000000007e245bc = 1;
        }
        plVar6 = (long *)(**(code **)(*plVar4 + 0x4d8))
                                   (plVar4,auVar13._8_8_,*(undefined8 *)(*plVar4 + 0x4e0));
        if (plVar6 != (long *)0x0) {
          lVar9 = *plVar6;
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0777c248) {
                puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_0623fb00;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar5 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_0777c248,0);
LAB_0623fb00:
          lVar9 = (*(code *)*puVar5)(plVar6,puVar5[1]);
          uVar8 = (**(code **)(*plVar4 + 0x4e8))
                            (plVar4,auVar13._8_8_,*(undefined8 *)(*plVar4 + 0x4f0));
          if (lVar9 != 0) {
            iVar3 = func_0x04145210(lVar9,uVar8,*(undefined8 *)PTR_DAT_077db338);
            return (ulong)(iVar3 + 1);
          }
        }
        func_0x03280cac();
        lVar9 = func_0x0623e2ec();
        return (ulong)(lVar9 == 0);
      }
      lVar9 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07779820) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0623fa20;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_07779820,0);
LAB_0623fa20:
      uVar8 = (*(code *)*puVar5)(plVar6,puVar5[1]);
                    /* WARNING: Could not recover jumptable at 0x0623fa48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar11 = (**(code **)(*plVar4 + 0x4d8))(plVar4,uVar8,*(undefined8 *)(*plVar4 + 0x4e0));
      return uVar11;
    }
    uVar2 = func_0x041447fc(param_3,uVar8,*(undefined8 *)PTR_DAT_07763de8);
    uVar2 = uVar2 ^ 1;
  }
  return (ulong)(uVar2 & 1);
}

