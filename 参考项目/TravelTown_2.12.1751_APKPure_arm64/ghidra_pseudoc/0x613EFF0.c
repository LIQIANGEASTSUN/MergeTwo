/* Ghidra 12.1.2 native pseudocode; RVA 0x613EFF0; MergeEngine.Model.Configuration.MergingConfigurationModel.GetPreviousItemOnGraph; status ok */


ulong MergeEngine_Model_Configuration_MergingConfigurationModel__GetPreviousItemOnGraph
                (undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *unaff_x19;
  long *unaff_x20;
  undefined *unaff_x21;
  undefined *unaff_x22;
  undefined8 unaff_x30;
  undefined1 auVar14 [16];
  undefined1 auVar15 [12];
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x30;
    *(undefined **)((long)register0x00000008 + -0x20) = unaff_x22;
    *(undefined **)((long)register0x00000008 + -0x18) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x10) = unaff_x20;
    *(long **)((long)register0x00000008 + -8) = unaff_x19;
    if ((bRam0000000007e245b5 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0777c248);
      func_0x03280a18(PTR_DAT_0777e548);
      func_0x03280a18(PTR_DAT_077db338);
      func_0x03280a18(PTR_DAT_0777e510);
      bRam0000000007e245b5 = 1;
    }
    puVar3 = PTR_DAT_0777e548;
    unaff_x19 = param_2;
    unaff_x20 = (long *)0x7e24000;
    if (param_2 != (long *)0x0) {
      lVar11 = *param_2;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0777e548) {
            puVar6 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0x1b) * 0x10 + 0x138);
            goto LAB_0623f0a0;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(param_2,*(long *)PTR_DAT_0777e548,0x1b);
LAB_0623f0a0:
      lVar11 = (*(code *)*puVar6)(param_2,puVar6[1]);
      if (lVar11 == 0) {
        return 0;
      }
      lVar11 = *param_2;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
            puVar6 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0x1b) * 0x10 + 0x138);
            goto LAB_0623f100;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar3,0x1b);
LAB_0623f100:
      plVar7 = (long *)(*(code *)*puVar6)(param_2,puVar6[1]);
      puVar2 = PTR_DAT_0777c248;
      unaff_x21 = puVar3;
      if (plVar7 != (long *)0x0) {
        lVar11 = *plVar7;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0777c248) {
              puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0623f168;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_0777c248,0);
LAB_0623f168:
        lVar11 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        unaff_x20 = plVar7;
        unaff_x22 = puVar2;
        if (lVar11 != 0) {
          iVar5 = func_0x04145210(lVar11,param_2,*(undefined8 *)PTR_DAT_077db338);
          uVar8 = iVar5 - 1;
          unaff_x20 = (long *)(ulong)uVar8;
          if (iVar5 < 1) {
            return 0;
          }
          lVar11 = *param_2;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                puVar6 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0x1b) * 0x10 + 0x138);
                goto LAB_0623f1f8;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar6 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar3,0x1b);
LAB_0623f1f8:
          plVar7 = (long *)(*(code *)*puVar6)(param_2,puVar6[1]);
          if (plVar7 != (long *)0x0) {
            lVar11 = *plVar7;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                  puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_0623f258;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar6 = (undefined8 *)func_0x03256b10(plVar7,*(long *)puVar2,0);
LAB_0623f258:
            lVar11 = (*(code *)*puVar6)(plVar7,puVar6[1]);
            unaff_x19 = plVar7;
            if (lVar11 != 0) {
              uVar1 = *(undefined8 *)((long)register0x00000008 + -0x18);
              uVar9 = *(undefined8 *)PTR_DAT_0777e510;
              *(undefined8 *)((long)register0x00000008 + -0x20) =
                   *(undefined8 *)((long)register0x00000008 + -0x30);
              *(undefined8 *)((long)register0x00000008 + -0x10) =
                   *(undefined8 *)((long)register0x00000008 + -0x10);
              *(undefined8 *)((long)register0x00000008 + -8) =
                   *(undefined8 *)((long)register0x00000008 + -8);
              if (*(uint *)(lVar11 + 0x18) <= uVar8) {
                func_0x057b8434(0);
              }
              lVar10 = *(long *)(lVar11 + 0x10);
              if (lVar10 == 0) {
                func_0x03280cac();
              }
              else if (uVar8 < *(uint *)(lVar10 + 0x18)) {
                return *(ulong *)(lVar10 + (long)(int)uVar8 * 8 + 0x20);
              }
              auVar15 = func_0x03280cb4();
              uVar8 = auVar15._8_4_;
              lVar10 = auVar15._0_8_;
              *(undefined8 *)((long)register0x00000008 + -0x40) = 0x41441f0;
              *(undefined8 *)((long)register0x00000008 + -0x38) = uVar1;
              *(long *)((long)register0x00000008 + -0x30) = lVar11;
              *(long **)((long)register0x00000008 + -0x28) = unaff_x20;
              if (*(uint *)(lVar10 + 0x18) <= uVar8) {
                func_0x057b8434(0);
              }
              lVar11 = *(long *)(lVar10 + 0x10);
              if (lVar11 == 0) {
                func_0x03280cac();
              }
              else if (uVar8 < *(uint *)(lVar11 + 0x18)) {
                puVar6 = (undefined8 *)(lVar11 + (long)(int)uVar8 * 8 + 0x20);
                *puVar6 = uVar9;
                uVar12 = func_0x032809c4(puVar6,uVar9);
                *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                return uVar12;
              }
              auVar14 = func_0x03280cb4();
              *(undefined8 *)((long)register0x00000008 + -0x50) = 0x414425c;
              *(long *)((long)register0x00000008 + -0x48) = lVar10;
              lVar11 = *(long *)(auVar14._8_8_ + 0x20);
              if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                lVar11 = func_0x0325681c(lVar11);
              }
              lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x48);
              if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                lVar11 = func_0x0325681c(lVar11);
              }
              lVar11 = func_0x03280b90(auVar14._0_8_,lVar11);
              if (lVar11 == 0) {
                uVar12 = (ulong)(auVar14._0_8_ == 0);
              }
              else {
                uVar12 = 1;
              }
              return uVar12;
            }
          }
        }
      }
    }
    auVar14 = func_0x03280cac();
    puVar4 = (undefined8 *)((long)register0x00000008 + -0x40);
    *(undefined8 *)((long)register0x00000008 + -0x40) = 0x623f28c;
    lVar11 = *auVar14._0_8_;
    param_2 = (long *)(**(code **)(lVar11 + 0x4e8))
                                (auVar14._0_8_,auVar14._8_8_,*(undefined8 *)(lVar11 + 0x4f0));
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
    unaff_x30 = *puVar4;
  } while( true );
}

