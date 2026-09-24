/* Ghidra 12.1.2 native pseudocode; RVA 0x626EFD0; MergeEngine.ECS.Util.BoardItemUtil.CanMergeAnyItemOnly; status ok */


ulong MergeEngine_ECS_Util_BoardItemUtil__CanMergeAnyItemOnly
                (long param_1,long param_2,long *param_3)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  
  plVar12 = param_3;
  if ((bRam0000000007e25417 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777bf98);
    func_0x03280a18(PTR_DAT_0777e638);
    func_0x03280a18(PTR_DAT_077e64f8);
    func_0x03280a18(PTR_DAT_0777c248);
    func_0x03280a18(PTR_DAT_0777e548);
    func_0x03280a18(PTR_DAT_0777a498);
    bRam0000000007e25417 = 1;
  }
  puVar5 = PTR_DAT_0777e638;
  uVar6 = 0;
  if ((param_1 == 0) || (param_2 == 0)) goto LAB_0636f1d8;
  if (*(int *)(param_1 + 0x28) == 1) {
    if (*(int *)(param_2 + 0x28) == 0) goto LAB_0636f078;
  }
  else {
    uVar6 = 0;
    if ((*(int *)(param_1 + 0x28) != 0) || (*(int *)(param_2 + 0x28) != 1)) goto LAB_0636f1d8;
LAB_0636f078:
    lVar7 = func_0x03ced81c(param_1,*(undefined8 *)PTR_DAT_0777e638);
    lVar8 = func_0x03ced81c(param_2,*(undefined8 *)puVar5);
    if (((lVar7 == 0) || (*(char *)(lVar7 + 0x32) == '\0')) &&
       ((lVar8 == 0 || (*(char *)(lVar8 + 0x32) == '\0')))) {
      if (*(int *)(param_1 + 0x28) != 0) {
        param_1 = param_2;
      }
      lVar7 = func_0x03ced81c(param_1,*(undefined8 *)PTR_DAT_0777bf98);
      puVar5 = PTR_DAT_0777a498;
      if (param_3 == (long *)0x0) {
LAB_0636f330:
        auVar17 = func_0x03280cac();
        lVar8 = auVar17._8_8_;
        lVar7 = auVar17._0_8_;
        if ((bRam0000000007e25418 & 1) == 0) {
          func_0x03280a18(PTR_DAT_0777bf98);
          func_0x03280a18(PTR_DAT_0777e638);
          func_0x03280a18(PTR_DAT_0777a498);
          bRam0000000007e25418 = 1;
        }
        puVar5 = PTR_DAT_0777e638;
        if (((lVar7 != 0) && (lVar8 != 0)) &&
           ((*(int *)(lVar7 + 0x28) == 3 || (*(int *)(lVar8 + 0x28) == 3)))) {
          lVar13 = func_0x03ced81c(lVar7,*(undefined8 *)PTR_DAT_0777e638);
          lVar11 = func_0x03ced81c(lVar8,*(undefined8 *)puVar5);
          if (((lVar13 == 0) ||
              (uVar14 = MergeEngine_ECS_Components_Items_LockedComponent__get_AnyLock(lVar13,0),
              (uVar14 & 1) == 0)) &&
             ((lVar11 == 0 ||
              (uVar14 = MergeEngine_ECS_Components_Items_LockedComponent__get_AnyLock(lVar11,0),
              (uVar14 & 1) == 0)))) {
            iVar2 = *(int *)(lVar7 + 0x28);
            lVar13 = lVar8;
            if (iVar2 != 3) {
              lVar13 = lVar7;
            }
            lVar13 = func_0x03ced81c(lVar13,*(undefined8 *)PTR_DAT_0777bf98);
            if (lVar13 != 0) {
              if (iVar2 != 3) {
                lVar7 = lVar8;
              }
              uVar14 = func_0x055ea870(*(undefined8 *)(lVar13 + 0x30),*(undefined8 *)(lVar7 + 0x30),
                                       0);
              if ((uVar14 & 1) == 0) {
                return 0;
              }
              if (plVar12 != (long *)0x0) {
                lVar7 = *plVar12;
                uVar16 = *(undefined8 *)(lVar13 + 0x30);
                uVar14 = (ulong)*(ushort *)(lVar7 + 0x12e);
                if (uVar14 != 0) {
                  piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0777a498) {
                      puVar9 = (undefined8 *)(lVar7 + (long)(*piVar15 + 0xd) * 0x10 + 0x138);
                      goto LAB_0636f4ac;
                    }
                    uVar14 = uVar14 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar14 != 0);
                }
                puVar9 = (undefined8 *)func_0x03256b10(plVar12,*(long *)PTR_DAT_0777a498,0xd);
LAB_0636f4ac:
                lVar7 = (*(code *)*puVar9)(plVar12,uVar16,puVar9[1]);
                return (ulong)(lVar7 != 0);
              }
            }
            func_0x03280cac();
            puVar5 = PTR_DAT_077e64f0;
            if ((bRam0000000007e25419 & 1) == 0) {
              func_0x03280a18(PTR_DAT_077e64f0);
              bRam0000000007e25419 = 1;
            }
            uVar16 = func_0x03280ca0(*(undefined8 *)puVar5);
            func_0x057da5fc(uVar16,0);
            **(undefined8 **)(*(long *)puVar5 + 0xb8) = uVar16;
            uVar14 = *(ulong *)(*(long *)puVar5 + 0xb8);
            if (iRam00000000080486b8 != 0) {
              puVar1 = (ulong *)((uVar14 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                  *puVar1 = *puVar1 | 1L << (uVar14 >> 0xc & 0x3f);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            return uVar14;
          }
        }
        return 0;
      }
      lVar8 = *param_3;
      uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0777a498) {
            puVar9 = (undefined8 *)(lVar8 + (long)(*piVar15 + 0x14) * 0x10 + 0x138);
            goto LAB_0636f134;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)func_0x03256b10(param_3,*(long *)PTR_DAT_0777a498,0x14);
LAB_0636f134:
      plVar12 = (long *)puVar9[1];
      plVar10 = (long *)(*(code *)*puVar9)(param_3,param_1);
      if (plVar10 == (long *)0x0) goto LAB_0636f330;
      lVar8 = *plVar10;
      uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0777e548) {
            puVar9 = (undefined8 *)(lVar8 + (long)(*piVar15 + 0x14) * 0x10 + 0x138);
            goto LAB_0636f1a4;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      plVar12 = (long *)0x14;
      puVar9 = (undefined8 *)func_0x03256b10(plVar10);
LAB_0636f1a4:
      uVar14 = (*(code *)*puVar9)(plVar10,puVar9[1]);
      if ((uVar14 & 1) != 0) {
        uVar6 = 1;
        goto LAB_0636f1d8;
      }
      lVar8 = func_0x03ced85c(param_1,*(undefined8 *)PTR_DAT_077e64f8);
      if (lVar8 == 0) {
        if (lVar7 == 0) goto LAB_0636f330;
        lVar13 = *param_3;
        uVar16 = *(undefined8 *)(lVar7 + 0x30);
        lVar8 = *(long *)puVar5;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar8) {
              puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 0xd) * 0x10 + 0x138);
              goto LAB_0636f244;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar9 = (undefined8 *)func_0x03256b10(param_3,lVar8,0xd);
LAB_0636f244:
        lVar8 = (*(code *)*puVar9)(param_3,uVar16,puVar9[1]);
        if (lVar8 != 0) {
          lVar8 = *param_3;
          uVar16 = *(undefined8 *)(lVar7 + 0x30);
          lVar7 = *(long *)puVar5;
          uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar7) {
                puVar9 = (undefined8 *)(lVar8 + (long)(*piVar15 + 4) * 0x10 + 0x138);
                goto LAB_0636f2ac;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar9 = (undefined8 *)func_0x03256b10(param_3,lVar7,4);
LAB_0636f2ac:
          plVar12 = (long *)puVar9[1];
          plVar10 = (long *)(*(code *)*puVar9)(param_3,uVar16);
          if (plVar10 != (long *)0x0) {
            lVar7 = *plVar10;
            uVar14 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0777c248) {
                  puVar9 = (undefined8 *)(lVar7 + (long)(*piVar15 + 0xb) * 0x10 + 0x138);
                  goto LAB_0636f31c;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
            puVar9 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_0777c248,0xb);
LAB_0636f31c:
            uVar6 = (*(code *)*puVar9)(plVar10,puVar9[1]);
            uVar6 = uVar6 ^ 1;
            goto LAB_0636f1d8;
          }
          goto LAB_0636f330;
        }
      }
    }
  }
  uVar6 = 0;
LAB_0636f1d8:
  return (ulong)(uVar6 & 1);
}

