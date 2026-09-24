
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0311a820(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char *pcVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  undefined4 uVar18;
  int *piVar19;
  int iVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  uint uVar23;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar13 = (char *)(iRam0311b200 + 0x311a840);
  if (*pcVar13 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0311b204 + 0x311a854));
    func_0x01438628(*(undefined4 *)(_UNK_0311b208 + 0x311a860));
    func_0x01438628(*(undefined4 *)(_UNK_0311b20c + 0x311a86c));
    func_0x01438628(*(undefined4 *)(_UNK_0311b210 + 0x311a878));
    func_0x01438628(*(undefined4 *)(_UNK_0311b214 + 0x311a884));
    func_0x01438628(*(undefined4 *)(_UNK_0311b218 + 0x311a890));
    func_0x01438628(*(undefined4 *)(_UNK_0311b21c + 0x311a89c));
    func_0x01438628(*(undefined4 *)(_UNK_0311b220 + 0x311a8a8));
    func_0x01438628(*(undefined4 *)(_UNK_0311b224 + 0x311a8b4));
    func_0x01438628(*(undefined4 *)(_UNK_0311b228 + 0x311a8c0));
    func_0x01438628(*(undefined4 *)(_UNK_0311b22c + 0x311a8cc));
    func_0x01438628(*(undefined4 *)(_UNK_0311b230 + 0x311a8d8));
    func_0x01438628(*(undefined4 *)(_UNK_0311b234 + 0x311a8e4));
    func_0x01438628(*(undefined4 *)(_UNK_0311b238 + 0x311a8f0));
    func_0x01438628(*(undefined4 *)(_UNK_0311b23c + 0x311a8fc));
    func_0x01438628(*(undefined4 *)(_UNK_0311b240 + 0x311a908));
    func_0x01438628(*(undefined4 *)(_UNK_0311b244 + 0x311a914));
    func_0x01438628(*(undefined4 *)(_UNK_0311b248 + 0x311a920));
    func_0x01438628(*(undefined4 *)(_UNK_0311b24c + 0x311a92c));
    func_0x01438628(*(undefined4 *)(_UNK_0311b250 + 0x311a938));
    func_0x01438628(*(undefined4 *)(_UNK_0311b254 + 0x311a944));
    func_0x01438628(*(undefined4 *)(_UNK_0311b258 + 0x311a950));
    func_0x01438628(*(undefined4 *)(_UNK_0311b25c + 0x311a95c));
    func_0x01438628(*(undefined4 *)(_UNK_0311b260 + 0x311a968));
    func_0x01438628(*(undefined4 *)(_UNK_0311b264 + 0x311a974));
    func_0x01438628(*(undefined4 *)(_UNK_0311b268 + 0x311a980));
    func_0x01438628(*(undefined4 *)(_UNK_0311b26c + 0x311a98c));
    func_0x01438628(*(undefined4 *)(_UNK_0311b270 + 0x311a998));
    func_0x01438628(*(undefined4 *)(_UNK_0311b274 + 0x311a9a4));
    *pcVar13 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_4c = 0;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  iVar6 = func_0x02953fd4(0x78b9,0);
  if (iVar6 == 0) {
    iVar6 = func_0x014388d4(**(undefined4 **)(_UNK_0311b278 + 0x311aa18));
    func_0x0311c770(iVar6,0);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar6 + 0x10) = param_1;
    *(undefined4 *)(iVar6 + 8) = param_2;
    func_0x014385cc((undefined4 *)(iVar6 + 0x10),param_1);
    iVar14 = *(int *)(iVar6 + 8);
    iVar7 = FUN_03118954(param_1);
    if (iVar7 <= iVar14) {
      piVar17 = *(int **)(_UNK_0311b27c + 0x311aa70);
      if (*(int *)(*piVar17 + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar21 = *(undefined4 **)(_UNK_0311b280 + 0x311aa8c);
      iVar7 = func_0x04e4a028(*puVar21);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      piVar19 = *(int **)(_UNK_0311b284 + 0x311aaac);
      iVar14 = *(int *)(iVar7 + 0x30);
      iVar7 = *piVar19;
      if (*(int *)(iVar7 + 0x74) == 0) {
        func_0x014387a4();
        iVar7 = *piVar19;
      }
      iVar15 = *(int *)(*(int *)(iVar7 + 0x5c) + 4);
      if (iVar15 == 0) {
        if (*(int *)(iVar7 + 0x74) == 0) {
          func_0x014387a4();
          iVar7 = *piVar19;
        }
        uVar18 = **(undefined4 **)(iVar7 + 0x5c);
        iVar15 = func_0x014388d4(**(undefined4 **)(_UNK_0311b288 + 0x311aafc));
        func_0x03a062d0(iVar15,uVar18,**(undefined4 **)(_UNK_0311b28c + 0x311ab1c),0);
        piVar19 = (int *)(*(int *)(*piVar19 + 0x5c) + 4);
        *piVar19 = iVar15;
        func_0x014385cc(piVar19,iVar15);
      }
      if (iVar14 == 0) {
        func_0x014388e4();
      }
      iVar7 = func_0x04cfe1c0(iVar14,iVar15,**(undefined4 **)(_UNK_0311b290 + 0x311ab58));
      if (iVar7 != 0) {
        iVar14 = func_0x014388d4(**(undefined4 **)(_UNK_0311b294 + 0x311ab78));
        func_0x04cfd1b4(iVar14,**(undefined4 **)(_UNK_0311b298 + 0x311ab8c));
        if (*(int *)(*piVar17 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar15 = func_0x04e4a028(*puVar21);
        if (iVar15 == 0) {
          func_0x014388e4();
        }
        iVar16 = *(int *)(iVar15 + 0x34);
        iVar15 = 0;
        puVar21 = *(undefined4 **)(_UNK_0311b29c + 0x311abe4);
        puVar22 = *(undefined4 **)(_UNK_0311b2a0 + 0x311abec);
        while( true ) {
          if (iVar16 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar16 + 0xc) <= iVar15) break;
          iVar20 = *(int *)(iVar7 + 0x14);
          iVar8 = func_0x04cfd760(iVar16,iVar15,*puVar21);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          uVar18 = *(undefined4 *)(iVar8 + 8);
          if (iVar20 == 0) {
            func_0x014388e4();
          }
          iVar8 = func_0x04cd2d7c(iVar20,uVar18,*puVar22);
          if (iVar8 != 0) {
            uVar18 = func_0x04cfd760(iVar16,iVar15,*puVar21);
            if (iVar14 == 0) {
              func_0x014388e4();
            }
            iVar8 = *(int *)(iVar14 + 8);
            uVar23 = *(uint *)(iVar14 + 0xc);
            piVar17 = *(int **)(_UNK_0311b2a4 + 0x311ac94);
            *(int *)(iVar14 + 0x10) = *(int *)(iVar14 + 0x10) + 1;
            iVar20 = *piVar17;
            if (iVar8 == 0) {
              func_0x014388e4();
            }
            if (uVar23 < *(uint *)(iVar8 + 0xc)) {
              *(uint *)(iVar14 + 0xc) = uVar23 + 1;
              puVar22 = (undefined4 *)(iVar8 + uVar23 * 4 + 0x10);
              *puVar22 = uVar18;
              func_0x014385cc(puVar22,uVar18);
            }
            else {
              func_0x04cfda38(iVar14,uVar18,
                              *(undefined4 *)(*(int *)(*(int *)(iVar20 + 0x10) + 0x60) + 0x38));
            }
            puVar22 = *(undefined4 **)(_UNK_0311b2a8 + 0x311acf4);
          }
          iVar15 = iVar15 + 1;
        }
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar6 + 8);
        if (iVar14 == 0) {
          func_0x014388e4();
        }
        if (iVar7 < *(int *)(iVar14 + 0xc)) {
          iVar7 = func_0x04cfd760(iVar14,*(undefined4 *)(iVar6 + 8),*puVar21);
          piVar17 = (int *)(iVar6 + 0xc);
          *piVar17 = iVar7;
          func_0x014385cc(piVar17,iVar7);
          if (*piVar17 != 0) {
            iVar7 = *(int *)(*piVar17 + 0x14);
            if (iVar7 == 2) {
              if (*(int *)(**(int **)(_UNK_0311b2dc + 0x311b0f8) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar6 = func_0x0202346c(0);
              iVar7 = *piVar17;
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              uStack_4c = *(undefined4 *)(iVar7 + 0x18);
              uVar18 = func_0x01524ffc(&uStack_4c,0);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              func_0x020257a4(iVar6,0x2e1,uVar18,0,0,0,0);
              if (*(int *)(**(int **)(_UNK_0311b2e0 + 0x311b18c) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_0311b2e4 + 0x311b1a8));
              iVar7 = *piVar17;
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              uVar18 = *(undefined4 *)(iVar7 + 0x18);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              func_0x02aac608(iVar6,uVar18,**(undefined4 **)(_UNK_0311b2e8 + 0x311b1e4),0,0);
            }
            else if (iVar7 == 1) {
              iVar7 = func_0x014388d4(**(undefined4 **)(_UNK_0311b2ac + 0x311ad74));
              func_0x04cfd1b4(iVar7,**(undefined4 **)(_UNK_0311b2b0 + 0x311ad88));
              iVar14 = 0;
              puVar21 = *(undefined4 **)(_UNK_0311b2b4 + 0x311ada0);
              while( true ) {
                iVar15 = *piVar17;
                if (iVar15 == 0) {
                  func_0x014388e4();
                }
                iVar15 = *(int *)(iVar15 + 0xc);
                if (iVar15 == 0) {
                  func_0x014388e4();
                }
                if (*(int *)(iVar15 + 0xc) <= iVar14) break;
                iVar15 = *piVar17;
                if (iVar15 == 0) {
                  func_0x014388e4();
                }
                iVar15 = *(int *)(iVar15 + 0xc);
                if (iVar15 == 0) {
                  func_0x014388e4();
                }
                uVar18 = func_0x04cd26d0(iVar15,iVar14,*puVar21);
                iVar15 = *piVar17;
                if (iVar15 == 0) {
                  func_0x014388e4();
                }
                iVar15 = *(int *)(iVar15 + 0x10);
                if (iVar15 == 0) {
                  func_0x014388e4();
                }
                uVar9 = func_0x04cd26d0(iVar15,iVar14,*puVar21);
                uVar10 = func_0x014388d4(**(undefined4 **)(_UNK_0311b2b8 + 0x311ae40));
                func_0x02ca3c70(uVar10,uVar18,uVar9,0,0);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar16 = *(int *)(iVar7 + 8);
                uVar23 = *(uint *)(iVar7 + 0xc);
                piVar19 = *(int **)(_UNK_0311b2bc + 0x311ae90);
                *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
                iVar15 = *piVar19;
                if (iVar16 == 0) {
                  func_0x014388e4();
                }
                if (uVar23 < *(uint *)(iVar16 + 0xc)) {
                  *(uint *)(iVar7 + 0xc) = uVar23 + 1;
                  puVar22 = (undefined4 *)(iVar16 + uVar23 * 4 + 0x10);
                  *puVar22 = uVar10;
                  func_0x014385cc(puVar22,uVar10);
                }
                else {
                  func_0x04cfda38(iVar7,uVar10,
                                  *(undefined4 *)(*(int *)(*(int *)(iVar15 + 0x10) + 0x60) + 0x38));
                }
                iVar14 = iVar14 + 1;
              }
              if (*(int *)(**(int **)(_UNK_0311b2c0 + 0x311aef4) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar15 = func_0x0202346c(0);
              iVar16 = *piVar17;
              iVar14 = iVar16;
              if (iVar16 == 0) {
                func_0x014388e4();
                iVar14 = *piVar17;
                if (iVar14 == 0) {
                  func_0x014388e4();
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
              }
              uVar18 = *(undefined4 *)(iVar14 + 0x10);
              uVar9 = *(undefined4 *)(iVar16 + 0xc);
              if (iVar15 == 0) {
                func_0x014388e4();
              }
              func_0x02025168(iVar15,uVar9,uVar18,0x75,0);
              func_0x02028d38(&uStack_48,0xde,0);
              iVar14 = *piVar17;
              if (iVar14 == 0) {
                func_0x014388e4();
              }
              uStack_4c = *(undefined4 *)(iVar14 + 8);
              uStack_44 = func_0x01524ffc(&uStack_4c,0);
              func_0x014385cc((uint)&uStack_48 | 4,uStack_44);
              FUN_031189c0(param_1);
              if (*(int *)(**(int **)(_UNK_0311b2c4 + 0x311afbc) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar14 = func_0x03b2c734(**(undefined4 **)(_UNK_0311b2c8 + 0x311afd8));
              if (*(int *)(**(int **)(_UNK_0311b2cc + 0x311afec) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar15 = func_0x04e4a028(**(undefined4 **)(_UNK_0311b2d0 + 0x311b008));
              if (iVar15 == 0) {
                func_0x014388e4();
              }
              uVar5 = uStack_2c;
              uVar4 = uStack_30;
              uVar3 = uStack_34;
              uVar2 = uStack_38;
              uVar1 = uStack_3c;
              uVar10 = uStack_40;
              uVar9 = uStack_44;
              uVar18 = uStack_48;
              uVar11 = *(undefined4 *)(iVar15 + 0x10);
              uVar12 = func_0x014388d4(**(undefined4 **)(_UNK_0311b2d4 + 0x311b05c));
              func_0x05096384(uVar12,iVar6,**(undefined4 **)(_UNK_0311b2d8 + 0x311b080),0);
              if (iVar14 == 0) {
                func_0x014388e4();
              }
              func_0x02b75870(iVar14,iVar7,uVar11,1,uVar18,uVar9,uVar10,uVar1,uVar2,uVar3,uVar4,
                              uVar5,uVar12,0,0);
            }
          }
        }
      }
    }
  }
  else {
    iVar6 = func_0x029540a4(0x78b9,0);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    func_0x0286c2b8(iVar6,param_1,param_2,0);
  }
  return;
}

