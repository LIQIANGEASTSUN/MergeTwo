/* Ghidra 12.1.2 native pseudocode; RVA 0x665EF40; MergeEngine.ECS.Systems.Board.BoardSystem.MoveItemWithOperation; status ok */

ulong MergeEngine_ECS_Systems_Board_BoardSystem__MoveItemWithOperation
                (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  
  func_0x0675ef68();
  if ((bRam0000000007e280dd & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_0777e4a0);
    func_0x03280a18(PTR_DAT_077e71b8);
    func_0x03280a18(PTR_DAT_077e71c0);
    func_0x03280a18(PTR_DAT_077e71c8);
    func_0x03280a18(PTR_DAT_07800cb8);
    func_0x03280a18(PTR_DAT_0777e5f8);
    bRam0000000007e280dd = 1;
  }
  plVar15 = *(long **)(param_1 + 0x58);
  if (plVar15 != (long *)0x0) {
    lVar8 = *plVar15;
    uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0777a498) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar13 + 0x14) * 0x10 + 0x138);
          goto LAB_0676ad7c;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(plVar15,*(long *)PTR_DAT_0777a498,0x14);
LAB_0676ad7c:
    uVar6 = (*(code *)*puVar5)(plVar15,param_4,puVar5[1]);
    puVar3 = PTR_DAT_077e71c8;
    puVar2 = PTR_DAT_077e71c0;
    if ((param_4 != 0) && (plVar15 = *(long **)(param_1 + 0x70), plVar15 != (long *)0x0)) {
      lVar9 = *plVar15;
      lVar8 = *(long *)(param_4 + 0x10);
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      uVar16 = *(undefined8 *)PTR_DAT_0777e5f8;
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0777e4a0) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0676ae10;
          }
          uVar11 = uVar11 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar15,*(long *)PTR_DAT_0777e4a0,0);
LAB_0676ae10:
      lVar9 = puVar5[1];
      uVar11 = 0;
      uVar6 = (*(code *)*puVar5)(plVar15,uVar16,uVar6,lVar8,0);
      lVar14 = *(long *)(param_1 + 0x78);
      lVar7 = func_0x03280ca0(*(undefined8 *)puVar3);
      func_0x04143c38(lVar7,*(undefined8 *)puVar2);
      if (lVar7 != 0) {
        lVar10 = *(long *)(lVar7 + 0x10);
        lVar12 = *(long *)PTR_DAT_077e71b8;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar10 != 0) {
          uVar1 = *(uint *)(lVar7 + 0x18);
          if (uVar1 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
            puVar5 = (undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
            *puVar5 = uVar6;
            func_0x032809c4(puVar5,uVar6);
          }
          else {
            func_0x0414446c(lVar7,uVar6,
                            *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
          if (lVar14 != 0) {
            lVar12 = *(long *)PTR_DAT_07800cb8;
            lVar10 = lVar12;
            if (*(long *)(lVar12 + 0x38) == 0) {
              func_0x03280a18(PTR_DAT_0777ab30);
              if (*(long *)(lVar12 + 0x38) == 0) {
                func_0x03256878(lVar12);
              }
            }
            plVar15 = *(long **)(lVar14 + 0x40);
            if (plVar15 == (long *)0x0) {
              auVar17 = func_0x03280cac();
              lVar7 = lVar10;
              lVar14 = lVar8;
              if (*(long *)(lVar8 + 0x38) == 0) {
                func_0x03280a18(PTR_DAT_077507d0);
                func_0x03280a18(PTR_DAT_0775a958);
                func_0x03280a18(PTR_DAT_07750838);
                func_0x03280a18(PTR_DAT_07779e90);
                func_0x03280a18(PTR_DAT_0777ab38);
                if (*(long *)(lVar8 + 0x38) == 0) {
                  func_0x03256878(lVar8);
                }
              }
              plVar15 = *(long **)(auVar17._0_8_ + 0x40);
              lVar12 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07750838);
              func_0x04fe1fa4(lVar12,*(undefined8 *)PTR_DAT_0775a958);
              if (lVar12 != 0) {
                lVar14 = *(long *)PTR_DAT_077507d0;
                func_0x04fe2d7c(lVar12,*(undefined8 *)PTR_DAT_07779e90,lVar10,lVar14);
                lVar7 = lVar10;
                if (plVar15 != (long *)0x0) {
                  lVar9 = *plVar15;
                  lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 8);
                  uVar6 = *(undefined8 *)PTR_DAT_0777ab38;
                  uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
                  if (uVar11 != 0) {
                    piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == *(long *)(lVar8 + 0x20)) {
                        lVar9 = lVar9 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar8 + 0x50)) *
                                        0x10 + 0x138;
                        goto LAB_03e40f1c;
                      }
                      uVar11 = uVar11 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar11 != 0);
                  }
                  lVar9 = func_0x03256b10(plVar15);
LAB_03e40f1c:
                  lVar8 = func_0x03280b88(*(undefined8 *)(lVar9 + 8),lVar8);
                    /* WARNING: Could not recover jumptable at 0x03e40f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  uVar11 = (**(code **)(lVar8 + 8))(plVar15,uVar6,auVar17._8_8_,lVar12,lVar8);
                  return uVar11;
                }
              }
              auVar17 = func_0x03280cac();
              if (*(long *)(lVar9 + 0x38) == 0) {
                func_0x03280a18(PTR_DAT_0777ab40);
                func_0x03280a18(PTR_DAT_0777ab48);
                if (*(long *)(lVar9 + 0x38) == 0) {
                  func_0x03256878(lVar9);
                }
              }
              lVar10 = *(long *)PTR_DAT_0777ab40;
              lVar8 = *(long *)(lVar10 + 0x38);
              if (lVar8 == 0) {
                func_0x03256878(lVar10);
                lVar8 = *(long *)(lVar10 + 0x38);
              }
              lVar8 = *(long *)(lVar8 + 0x10);
              if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
                lVar8 = func_0x0325681c();
              }
              if (*(int *)(lVar8 + 0xe0) == 0) {
                func_0x03280b8c();
              }
              lVar8 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
              if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
                lVar8 = func_0x0325681c();
              }
              uVar6 = (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x38) + 0x10))
                                (auVar17._8_8_,lVar7,**(undefined8 **)(lVar8 + 0xb8));
              uVar4 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777ab48);
              func_0x05a85e88(uVar4,auVar17._0_8_,lVar14,uVar11 & 0xffffffff,uVar6,0);
              return uVar4;
            }
            lVar8 = *plVar15;
            lVar9 = *(long *)(*(long *)(lVar12 + 0x38) + 8);
            uVar6 = *(undefined8 *)PTR_DAT_0777ab30;
            uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar11 != 0) {
              piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)(lVar9 + 0x20)) {
                  lVar8 = lVar8 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar9 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_03e40dbc;
                }
                uVar11 = uVar11 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar11 != 0);
            }
            lVar8 = func_0x03256b10(plVar15);
LAB_03e40dbc:
            lVar8 = func_0x03280b88(*(undefined8 *)(lVar8 + 8),lVar9);
                    /* WARNING: Could not recover jumptable at 0x03e40dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar11 = (**(code **)(lVar8 + 8))(plVar15,uVar6,lVar7,0,lVar8);
            return uVar11;
          }
        }
      }
    }
  }
  auVar17 = func_0x03280cac();
  lVar8 = *(long *)(auVar17._0_8_ + 0x88);
  if (lVar8 != 0) {
    lVar8 = func_0x06a02444(lVar8,auVar17._8_8_,0);
    return (ulong)(lVar8 == 0);
  }
  func_0x03280cac();
  lVar8 = func_0x0676af24();
  return (ulong)(lVar8 != 0);
}

