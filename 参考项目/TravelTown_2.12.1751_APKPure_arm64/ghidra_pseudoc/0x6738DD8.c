/* Ghidra 12.1.2 native pseudocode; RVA 0x6738DD8; Merger.Game.Views.BoardItem.ViewBehaviours.LockBehaviour.OnUpdate; status ok */


/* WARNING: Possible PIC construction at 0x06839338: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06839464: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0683933c) */
/* WARNING: Removing unreachable block (ram,0x06839340) */
/* WARNING: Removing unreachable block (ram,0x06839350) */
/* WARNING: Removing unreachable block (ram,0x06839354) */
/* WARNING: Removing unreachable block (ram,0x06839370) */
/* WARNING: Removing unreachable block (ram,0x06839394) */
/* WARNING: Removing unreachable block (ram,0x0683939c) */
/* WARNING: Removing unreachable block (ram,0x068393f4) */
/* WARNING: Removing unreachable block (ram,0x06839418) */
/* WARNING: Removing unreachable block (ram,0x06839444) */
/* WARNING: Removing unreachable block (ram,0x06839454) */
/* WARNING: Removing unreachable block (ram,0x06839458) */
/* WARNING: Removing unreachable block (ram,0x068393c4) */
/* WARNING: Removing unreachable block (ram,0x06839468) */
/* WARNING: Removing unreachable block (ram,0x0683946c) */
/* WARNING: Removing unreachable block (ram,0x06839474) */
/* WARNING: Removing unreachable block (ram,0x068394cc) */
/* WARNING: Removing unreachable block (ram,0x0683947c) */
/* WARNING: Removing unreachable block (ram,0x06839484) */
/* WARNING: Removing unreachable block (ram,0x0683949c) */
/* WARNING: Removing unreachable block (ram,0x068394a4) */
/* WARNING: Removing unreachable block (ram,0x068394d4) */
/* WARNING: Removing unreachable block (ram,0x068394b0) */
/* WARNING: Removing unreachable block (ram,0x068394bc) */
/* WARNING: Removing unreachable block (ram,0x068394e4) */
/* WARNING: Removing unreachable block (ram,0x068394f4) */
/* WARNING: Removing unreachable block (ram,0x06839508) */
/* WARNING: Removing unreachable block (ram,0x0683952c) */
/* WARNING: Removing unreachable block (ram,0x068327c0) */
/* WARNING: Removing unreachable block (ram,0x068327e0) */
/* WARNING: Removing unreachable block (ram,0x068327f4) */
/* WARNING: Removing unreachable block (ram,0x04d189dc) */
/* WARNING: Removing unreachable block (ram,0x04a31d7c) */
/* WARNING: Removing unreachable block (ram,0x069a2bc0) */
/* WARNING: Removing unreachable block (ram,0x06fe10d4) */
/* WARNING: Removing unreachable block (ram,0x06fdb424) */
/* WARNING: Removing unreachable block (ram,0x06fdb444) */
/* WARNING: Removing unreachable block (ram,0x06fdb458) */
/* WARNING: Removing unreachable block (ram,0x06fdb464) */
/* WARNING: Removing unreachable block (ram,0x06fdb468) */
/* WARNING: Removing unreachable block (ram,0x057da5fc) */
/* WARNING: Removing unreachable block (ram,0x06839510) */
/* WARNING: Removing unreachable block (ram,0x06839520) */

ulong Merger_Game_Views_BoardItem_ViewBehaviours_LockBehaviour__OnUpdate(long param_1)

{
  undefined *puVar1;
  code **ppcVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  int *piVar12;
  undefined *puVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  undefined *unaff_x22;
  undefined1 auVar17 [16];
  code *apcStack_a0 [2];
  undefined8 uStack_60;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_0774e4e0;
  plVar16 = (long *)0x7e28000;
  if ((bRam0000000007e289ea & 1) == 0) {
    func_0x03280a18(PTR_DAT_0780d990);
    func_0x03280a18(PTR_DAT_077c1d88);
    func_0x03280a18(PTR_DAT_0774e4e0);
    bRam0000000007e289ea = 1;
  }
  uStack_24 = 0;
  plVar14 = *(long **)(param_1 + 0x48);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  puVar11 = (undefined8 *)0x0;
  uVar6 = func_0x06fe04ec(plVar14,0);
  if ((uVar6 & 1) != 0) {
    return uVar6;
  }
  if ((*(long *)(param_1 + 0x48) != 0) &&
     (lVar7 = func_0x06812e80(*(long *)(param_1 + 0x48),0), lVar7 != 0)) {
    plVar8 = (long *)func_0x06fdbed0(lVar7,0);
    puVar1 = PTR_DAT_077c1d88;
    plVar16 = *(long **)(param_1 + 0x38);
    if (plVar16 != (long *)0x0) {
      lVar7 = *plVar16;
      uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar6 != 0) {
        piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_077c1d88) {
            puVar9 = (undefined8 *)(lVar7 + (long)(*piVar12 + 0x58) * 0x10 + 0x138);
            goto LAB_06838ed4;
          }
          uVar6 = uVar6 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar6 != 0);
      }
      puVar11 = (undefined8 *)0x58;
      puVar9 = (undefined8 *)func_0x03256b10(plVar16);
LAB_06838ed4:
      uVar3 = (*(code *)*puVar9)(plVar16,puVar9[1]);
      plVar14 = plVar8;
      unaff_x22 = puVar1;
      if (plVar8 != (long *)0x0) {
        puVar11 = (undefined8 *)0x0;
        func_0x06fdf26c(plVar8,uVar3 & 1);
        plVar16 = *(long **)(param_1 + 0x38);
        if (plVar16 != (long *)0x0) {
          lVar7 = *plVar16;
          lVar15 = *(long *)(param_1 + 0x48);
          uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar6 != 0) {
            piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                puVar9 = (undefined8 *)(lVar7 + (long)(*piVar12 + 4) * 0x10 + 0x138);
                goto LAB_06838f50;
              }
              uVar6 = uVar6 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar6 != 0);
          }
          puVar11 = (undefined8 *)0x4;
          puVar9 = (undefined8 *)func_0x03256b10(plVar16);
LAB_06838f50:
          uVar6 = (*(code *)*puVar9)(plVar16,puVar9[1]);
          if ((uVar6 & 1) == 0) {
            uVar3 = func_0x06838c8c(param_1);
          }
          else {
            uVar3 = 1;
          }
          plVar14 = (long *)0x0;
          if (lVar15 != 0) {
            puVar11 = (undefined8 *)0x0;
            func_0x0681305c(lVar15,uVar3 & 1);
            plVar14 = *(long **)(param_1 + 0x38);
            if (plVar14 != (long *)0x0) {
              lVar7 = *plVar14;
              uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar6 != 0) {
                piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                    puVar9 = (undefined8 *)(lVar7 + (long)(*piVar12 + 4) * 0x10 + 0x138);
                    goto LAB_06838fdc;
                  }
                  uVar6 = uVar6 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar6 != 0);
              }
              puVar11 = (undefined8 *)0x4;
              puVar9 = (undefined8 *)func_0x03256b10(plVar14);
LAB_06838fdc:
              uVar6 = (*(code *)*puVar9)(plVar14,puVar9[1]);
              if ((uVar6 & 1) != 0) {
                plVar14 = *(long **)(param_1 + 0x38);
                if (plVar14 == (long *)0x0) goto LAB_06839204;
                lVar7 = *plVar14;
                uVar3 = *(uint *)(param_1 + 0x50);
                plVar16 = (long *)(ulong)uVar3;
                uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
                if (uVar6 != 0) {
                  piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                      puVar9 = (undefined8 *)(lVar7 + (long)(*piVar12 + 5) * 0x10 + 0x138);
                      goto LAB_06839048;
                    }
                    uVar6 = uVar6 - 1;
                    piVar12 = piVar12 + 4;
                  } while (uVar6 != 0);
                }
                puVar11 = (undefined8 *)0x5;
                puVar9 = (undefined8 *)func_0x03256b10(plVar14);
LAB_06839048:
                uVar4 = (*(code *)*puVar9)(plVar14,puVar9[1]);
                if (uVar3 != uVar4) {
                  plVar14 = *(long **)(param_1 + 0x38);
                  if (plVar14 == (long *)0x0) goto LAB_06839204;
                  lVar7 = *plVar14;
                  uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
                  if (uVar6 != 0) {
                    piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                        puVar9 = (undefined8 *)(lVar7 + (long)(*piVar12 + 5) * 0x10 + 0x138);
                        goto LAB_068390b4;
                      }
                      uVar6 = uVar6 - 1;
                      piVar12 = piVar12 + 4;
                    } while (uVar6 != 0);
                  }
                  puVar11 = (undefined8 *)0x5;
                  puVar9 = (undefined8 *)func_0x03256b10(plVar14);
LAB_068390b4:
                  uVar5 = (*(code *)*puVar9)(plVar14,puVar9[1]);
                  plVar16 = *(long **)(param_1 + 0x38);
                  *(undefined4 *)(param_1 + 0x50) = uVar5;
                  if (plVar16 == (long *)0x0) goto LAB_06839204;
                  lVar7 = *plVar16;
                  plVar14 = *(long **)(param_1 + 0x48);
                  uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
                  if (uVar6 != 0) {
                    piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                        puVar9 = (undefined8 *)(lVar7 + (long)(*piVar12 + 5) * 0x10 + 0x138);
                        goto LAB_06839120;
                      }
                      uVar6 = uVar6 - 1;
                      piVar12 = piVar12 + 4;
                    } while (uVar6 != 0);
                  }
                  puVar11 = (undefined8 *)0x5;
                  puVar9 = (undefined8 *)func_0x03256b10(plVar16);
LAB_06839120:
                  uStack_24 = (*(code *)*puVar9)(plVar16,puVar9[1]);
                  uVar10 = func_0x05793b4c(&uStack_24,0);
                  if (plVar14 == (long *)0x0) goto LAB_06839204;
                  puVar11 = (undefined8 *)0x0;
                  func_0x06812fbc(plVar14,uVar10);
                }
              }
              plVar16 = *(long **)(param_1 + 0x38);
              if (plVar16 != (long *)0x0) {
                lVar7 = *plVar16;
                plVar14 = *(long **)(param_1 + 0x48);
                uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
                if (uVar6 != 0) {
                  piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                      puVar9 = (undefined8 *)(lVar7 + (long)(*piVar12 + 0x59) * 0x10 + 0x138);
                      goto LAB_068391ac;
                    }
                    uVar6 = uVar6 - 1;
                    piVar12 = piVar12 + 4;
                  } while (uVar6 != 0);
                }
                puVar11 = (undefined8 *)0x59;
                puVar9 = (undefined8 *)func_0x03256b10(plVar16);
LAB_068391ac:
                uVar6 = (*(code *)*puVar9)(plVar16,puVar9[1]);
                if ((uVar6 & 1) == 0) {
                  uVar3 = 0;
                }
                else {
                  uVar3 = func_0x06838c8c(param_1);
                  uVar3 = uVar3 ^ 1;
                }
                if (plVar14 != (long *)0x0) {
                  puVar11 = (undefined8 *)0x0;
                  func_0x068130f4(plVar14,uVar3 & 1);
                  if (*(long *)(param_1 + 0x48) != 0) {
                    uVar6 = func_0x06813234(*(long *)(param_1 + 0x48),0);
                    return uVar6;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_06839204:
  auVar17 = func_0x03280cac();
  puVar1 = PTR_DAT_0774e4e0;
  uStack_60 = 0x6839208;
  if ((bRam0000000007e289eb & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e4e0);
    bRam0000000007e289eb = 1;
  }
  uVar10 = *(undefined8 *)(auVar17._0_8_ + 0x48);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar6 = func_0x06fe04ec(uVar10,0,0);
  if ((uVar6 & 1) == 0) {
    lVar7 = *(long *)(auVar17._0_8_ + 0x48);
    if (lVar7 == 0) {
      auVar17 = func_0x03280cac();
      puVar1 = PTR_DAT_0774e4e0;
      plVar14 = auVar17._8_8_;
      param_1 = auVar17._0_8_;
      ppcVar2 = apcStack_a0;
      apcStack_a0[0] =
           Merger_Game_Views_BoardItem_ViewBehaviours_LockBehaviour__InstantiateBlockerItem;
      if ((bRam0000000007e289ec & 1) == 0) {
        func_0x03280a18(PTR_DAT_0780d990);
        func_0x03280a18(PTR_DAT_0780dbf0);
        func_0x03280a18(PTR_DAT_0774e4e0);
        bRam0000000007e289ec = 1;
      }
      plVar16 = (long *)(param_1 + 0x48);
      puVar13 = (undefined *)*plVar16;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uStack_60 = 0x683933c;
      unaff_x22 = puVar13;
    }
    else {
      if ((bRam0000000007e28833 & 1) == 0) {
        func_0x03280a18(PTR_DAT_0774e4e0,auVar17._8_8_ & 0xffffffff,puVar11,0);
        bRam0000000007e28833 = 1;
      }
      if (auVar17._8_4_ != 0) {
        *puVar11 = 0;
        func_0x032809c4(puVar11,0);
        return 0;
      }
      *puVar11 = *(undefined8 *)(lVar7 + 0x50);
      func_0x032809c4(puVar11);
      puVar13 = (undefined *)*puVar11;
      if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      ppcVar2 = (code **)&stack0xffffffffffffffd0;
    }
    puVar1 = PTR_DAT_0774e4e0;
    *(undefined8 *)((long)ppcVar2 + -0x30) = uStack_60;
    *(undefined **)((long)ppcVar2 + -0x20) = unaff_x22;
    *(long **)((long)ppcVar2 + -0x18) = plVar16;
    *(long **)((long)ppcVar2 + -0x10) = plVar14;
    *(long *)((long)ppcVar2 + -8) = param_1;
    if ((bRam0000000007e2fe38 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0774e4e0,0,0);
      bRam0000000007e2fe38 = 1;
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar3 = func_0x06fe3474(puVar13,0);
    return (ulong)(~uVar3 & 1);
  }
  *puVar11 = 0;
  func_0x032809c4(puVar11,0);
  return 0;
}

