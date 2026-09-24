/* Ghidra 12.1.2 native pseudocode; RVA 0x6786F88; MergeEngine.ECS.Systems.Board.StackingSystem.CanCombineItems; status ok */


/* WARNING: Possible PIC construction at 0x06886fe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06887000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06887350: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06887004) */
/* WARNING: Removing unreachable block (ram,0x06887008) */
/* WARNING: Removing unreachable block (ram,0x06887014) */
/* WARNING: Removing unreachable block (ram,0x0688701c) */
/* WARNING: Removing unreachable block (ram,0x06887034) */
/* WARNING: Removing unreachable block (ram,0x0688703c) */
/* WARNING: Removing unreachable block (ram,0x06887064) */
/* WARNING: Removing unreachable block (ram,0x06887048) */
/* WARNING: Removing unreachable block (ram,0x06887054) */
/* WARNING: Removing unreachable block (ram,0x06887074) */
/* WARNING: Removing unreachable block (ram,0x0688708c) */
/* WARNING: Removing unreachable block (ram,0x068870a0) */
/* WARNING: Removing unreachable block (ram,0x068870a8) */
/* WARNING: Removing unreachable block (ram,0x068870d0) */
/* WARNING: Removing unreachable block (ram,0x068870b4) */
/* WARNING: Removing unreachable block (ram,0x068870c0) */
/* WARNING: Removing unreachable block (ram,0x068870e0) */
/* WARNING: Removing unreachable block (ram,0x068870f4) */
/* WARNING: Removing unreachable block (ram,0x06887110) */
/* WARNING: Removing unreachable block (ram,0x06887118) */
/* WARNING: Removing unreachable block (ram,0x06887140) */
/* WARNING: Removing unreachable block (ram,0x06887124) */
/* WARNING: Removing unreachable block (ram,0x06887130) */
/* WARNING: Removing unreachable block (ram,0x0688714c) */
/* WARNING: Removing unreachable block (ram,0x0688715c) */
/* WARNING: Removing unreachable block (ram,0x06887170) */
/* WARNING: Removing unreachable block (ram,0x06887178) */
/* WARNING: Removing unreachable block (ram,0x068871a0) */
/* WARNING: Removing unreachable block (ram,0x06887184) */
/* WARNING: Removing unreachable block (ram,0x06887190) */
/* WARNING: Removing unreachable block (ram,0x068871ac) */
/* WARNING: Removing unreachable block (ram,0x068871e0) */
/* WARNING: Removing unreachable block (ram,0x068871e4) */
/* WARNING: Removing unreachable block (ram,0x0688723c) */
/* WARNING: Removing unreachable block (ram,0x068871fc) */
/* WARNING: Removing unreachable block (ram,0x06887218) */
/* WARNING: Removing unreachable block (ram,0x06887210) */
/* WARNING: Removing unreachable block (ram,0x0688721c) */
/* WARNING: Removing unreachable block (ram,0x06887228) */
/* WARNING: Removing unreachable block (ram,0x06887220) */
/* WARNING: Removing unreachable block (ram,0x0688722c) */
/* WARNING: Removing unreachable block (ram,0x06886fec) */
/* WARNING: Removing unreachable block (ram,0x06886ff0) */
/* WARNING: Removing unreachable block (ram,0x06886ffc) */
/* WARNING: Removing unreachable block (ram,0x06887354) */
/* WARNING: Removing unreachable block (ram,0x06887394) */
/* WARNING: Removing unreachable block (ram,0x06887358) */

ulong MergeEngine_ECS_Systems_Board_StackingSystem__CanCombineItems
                (undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long extraout_x1;
  long lVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined1 auStack_110 [16];
  
  if ((bRam0000000007e28d1d & 1) == 0) {
    func_0x03280a18(PTR_DAT_077e69c8);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_07779820);
    bRam0000000007e28d1d = 1;
  }
  uVar7 = func_0x06885344(param_1);
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  if ((bRam0000000007e28d1f & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e638);
    bRam0000000007e28d1f = 1;
  }
  if (param_2 != 0) {
    lVar8 = func_0x03ced81c(param_2,*(undefined8 *)PTR_DAT_0777e638);
    if (lVar8 == 0) {
      return 0;
    }
    if ((((*(char *)(lVar8 + 0x30) == '\0') && (*(char *)(lVar8 + 0x33) == '\0')) &&
        (*(int *)(lVar8 + 0x44) < 1)) &&
       (((*(char *)(lVar8 + 0x31) == '\0' && (*(char *)(lVar8 + 0x78) == '\0')) &&
        (*(char *)(lVar8 + 0x79) == '\0')))) {
      return (ulong)(*(char *)(lVar8 + 0x32) != '\0');
    }
    return 1;
  }
  func_0x03280cac();
  if ((bRam0000000007e28d20 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077e69c8);
    bRam0000000007e28d20 = 1;
  }
  if (extraout_x1 != 0) {
    lVar8 = func_0x03ced81c(extraout_x1,*(undefined8 *)PTR_DAT_077e69c8);
    return (ulong)(lVar8 != 0);
  }
  auVar22 = func_0x03280cac();
  uVar7 = func_0x06885344();
  if (((uVar7 & 1) == 0) ||
     (lVar8 = param_3,
     uVar7 = MergeEngine_ECS_Systems_Board_StackingSystem__CanCombineItems
                       (auVar22._0_8_,auVar22._8_8_), (uVar7 & 1) == 0)) {
    return 0;
  }
  if (param_3 == 0) {
    auVar22 = func_0x03280cac();
  }
  else {
    param_4 = *(undefined8 *)(param_3 + 0x30);
    lVar8 = param_3;
  }
  lVar15 = auVar22._8_8_;
  lVar9 = auVar22._0_8_;
  if ((bRam0000000007e28d1e & 1) == 0) {
    func_0x03280a18(PTR_DAT_077e69c8);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_0777e4a0);
    func_0x03280a18(PTR_DAT_078080f0);
    func_0x03280a18(PTR_DAT_07810170);
    func_0x03280a18(PTR_DAT_0777e4a8);
    func_0x03280a18(PTR_DAT_077cc918);
    func_0x03280a18(PTR_DAT_077cc910);
    func_0x03280a18(PTR_DAT_07810178);
    func_0x03280a18(PTR_DAT_07808118);
    func_0x03280a18(PTR_DAT_07810180);
    func_0x03280a18(PTR_DAT_07810188);
    func_0x03280a18(PTR_DAT_07778fa0);
    func_0x03280a18(PTR_DAT_0776b160);
    bRam0000000007e28d1e = 1;
  }
  auStack_110._0_8_ = 0;
  auStack_110._8_8_ = 0;
  plVar18 = *(long **)(lVar9 + 0x40);
  auVar22 = ZEXT816(0);
  if (plVar18 != (long *)0x0) {
    lVar14 = *plVar18;
    uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar7 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0777a498) {
          puVar10 = (undefined8 *)(lVar14 + (long)(*piVar17 + 0x14) * 0x10 + 0x138);
          goto LAB_068874ec;
        }
        uVar7 = uVar7 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar7 != 0);
    }
    puVar10 = (undefined8 *)func_0x03256b10(plVar18,*(long *)PTR_DAT_0777a498,0x14);
LAB_068874ec:
    uVar11 = (*(code *)*puVar10)(plVar18,lVar15,puVar10[1]);
    auStack_110 = func_0x0578e2a8(0);
    uVar12 = func_0x0579043c(auStack_110,0);
    puVar3 = PTR_DAT_077e69c8;
    auVar22 = auStack_110;
    if (lVar15 != 0) {
      lVar14 = func_0x03ced81c(lVar15,*(undefined8 *)PTR_DAT_077e69c8);
      auVar22 = auStack_110;
      if (lVar8 != 0) {
        lVar13 = func_0x03ced81c(lVar8,*(undefined8 *)puVar3);
        if (lVar14 == 0) {
          uVar6 = 1;
        }
        else {
          uVar6 = *(undefined4 *)(lVar14 + 0x28);
        }
        plVar18 = *(long **)(lVar9 + 0x60);
        auVar22 = auStack_110;
        if (plVar18 != (long *)0x0) {
          (**(code **)(*plVar18 + 0x218))
                    (plVar18,lVar15,*(undefined8 *)PTR_DAT_07810188,1,1,
                     *(undefined8 *)(*plVar18 + 0x220));
          auVar22 = auStack_110;
          if (lVar13 != 0) {
            func_0x069fdebc(lVar13,uVar6,0);
            puVar3 = PTR_DAT_0777e4a0;
            plVar18 = *(long **)(lVar9 + 0x48);
            auVar22 = auStack_110;
            if (plVar18 != (long *)0x0) {
              lVar14 = *plVar18;
              uVar19 = *(undefined8 *)(lVar15 + 0x10);
              uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
              uVar20 = *(undefined8 *)PTR_DAT_0776b160;
              if (uVar7 != 0) {
                piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0777e4a0) {
                    puVar10 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                    goto LAB_06887614;
                  }
                  uVar7 = uVar7 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar7 != 0);
              }
              puVar10 = (undefined8 *)func_0x03256b10(plVar18,*(long *)PTR_DAT_0777e4a0,0);
LAB_06887614:
              uVar19 = (*(code *)*puVar10)(plVar18,uVar20,uVar11,uVar19,0,puVar10[1]);
              puVar5 = PTR_DAT_077cc918;
              puVar4 = PTR_DAT_077cc910;
              plVar18 = *(long **)(lVar9 + 0x48);
              auVar22 = auStack_110;
              if (plVar18 != (long *)0x0) {
                lVar15 = *plVar18;
                uVar20 = *(undefined8 *)(lVar8 + 0x10);
                uVar7 = (ulong)*(ushort *)(lVar15 + 0x12e);
                uVar21 = *(undefined8 *)PTR_DAT_07778fa0;
                if (uVar7 != 0) {
                  piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
                      puVar10 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                      goto LAB_068876a8;
                    }
                    uVar7 = uVar7 - 1;
                    piVar17 = piVar17 + 4;
                  } while (uVar7 != 0);
                }
                puVar10 = (undefined8 *)func_0x03256b10(plVar18,*(long *)puVar3,0);
LAB_068876a8:
                uVar20 = (*(code *)*puVar10)(plVar18,uVar21,uVar11,uVar20,0,puVar10[1]);
                lVar15 = func_0x03280ca0(*(undefined8 *)puVar4);
                func_0x04143c38(lVar15,*(undefined8 *)puVar5);
                puVar3 = PTR_DAT_0777e4a8;
                auVar22 = auStack_110;
                if (lVar15 != 0) {
                  lVar14 = *(long *)(lVar15 + 0x10);
                  lVar16 = *(long *)PTR_DAT_0777e4a8;
                  *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                  if (lVar14 != 0) {
                    uVar2 = *(uint *)(lVar15 + 0x18);
                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                      *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                      puVar10 = (undefined8 *)(lVar14 + (long)(int)uVar2 * 8 + 0x20);
                      *puVar10 = uVar19;
                      func_0x032809c4(puVar10,uVar19);
                    }
                    else {
                      func_0x0414446c(lVar15,uVar19,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                    }
                    lVar14 = *(long *)(lVar15 + 0x10);
                    lVar16 = *(long *)puVar3;
                    *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                    auVar22 = auStack_110;
                    if (lVar14 != 0) {
                      uVar2 = *(uint *)(lVar15 + 0x18);
                      if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                        *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                        puVar10 = (undefined8 *)(lVar14 + (long)(int)uVar2 * 8 + 0x20);
                        *puVar10 = uVar20;
                        func_0x032809c4(puVar10,uVar20);
                      }
                      else {
                        func_0x0414446c(lVar15,uVar20,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                      }
                      puVar3 = PTR_DAT_07810170;
                      auVar22 = auStack_110;
                      if (*(long *)(lVar9 + 0x68) != 0) {
                        func_0x03e40df4(*(long *)(lVar9 + 0x68),lVar15,uVar12,
                                        *(undefined8 *)PTR_DAT_07810178);
                        lVar15 = *(long *)(lVar9 + 0x28);
                        uVar20 = *(undefined8 *)(lVar8 + 0x30);
                        uVar1 = *(undefined4 *)(lVar13 + 0x28);
                        uVar19 = func_0x03280ca0(*(undefined8 *)puVar3);
                        func_0x0686bba0(uVar19,uVar20,uVar6,uVar1,0);
                        auVar22 = auStack_110;
                        if (lVar15 != 0) {
                          func_0x03ea4d6c(lVar15,uVar19,*(undefined8 *)PTR_DAT_07810180);
                          puVar3 = PTR_DAT_078080f0;
                          auVar22 = auStack_110;
                          if (*(long *)(lVar9 + 0x60) != 0) {
                            lVar8 = *(long *)(lVar9 + 0x28);
                            uVar6 = func_0x067675f0(*(long *)(lVar9 + 0x60),0);
                            uVar19 = func_0x03280ca0(*(undefined8 *)puVar3);
                            func_0x0686ba84(uVar19,uVar11,uVar11,uVar11,0,0,0,0,uVar6,uVar12,param_4
                                            ,0);
                            auVar22 = auStack_110;
                            if (lVar8 != 0) {
                              uVar7 = func_0x03ea4d6c(lVar8,uVar19,*(undefined8 *)PTR_DAT_07808118);
                              return uVar7;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  auStack_110 = auVar22;
  uVar7 = func_0x03280cac();
  return uVar7;
}

