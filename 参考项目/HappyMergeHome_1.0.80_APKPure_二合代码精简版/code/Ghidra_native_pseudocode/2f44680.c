
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_02f54680(undefined4 param_1,undefined4 param_2)

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
  
  pcVar13 = (char *)(_UNK_02f55098 + 0x2f546a0);
  if (*pcVar13 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f5509c + 0x2f546b4));
    func_0x01438628(*(undefined4 *)(_UNK_02f550a0 + 0x2f546c0));
    func_0x01438628(*(undefined4 *)(_UNK_02f550a4 + 0x2f546cc));
    func_0x01438628(*(undefined4 *)(_UNK_02f550a8 + 0x2f546d8));
    func_0x01438628(*(undefined4 *)(_UNK_02f550ac + 0x2f546e4));
    func_0x01438628(*(undefined4 *)(_UNK_02f550b0 + 0x2f546f0));
    func_0x01438628(*(undefined4 *)(_UNK_02f550b4 + 0x2f546fc));
    func_0x01438628(*(undefined4 *)(_UNK_02f550b8 + 0x2f54708));
    func_0x01438628(*(undefined4 *)(_UNK_02f550bc + 0x2f54714));
    func_0x01438628(*(undefined4 *)(_UNK_02f550c0 + 0x2f54720));
    func_0x01438628(*(undefined4 *)(_UNK_02f550c4 + 0x2f5472c));
    func_0x01438628(*(undefined4 *)(_UNK_02f550c8 + 0x2f54738));
    func_0x01438628(*(undefined4 *)(_UNK_02f550cc + 0x2f54744));
    func_0x01438628(*(undefined4 *)(_UNK_02f550d0 + 0x2f54750));
    func_0x01438628(*(undefined4 *)(_UNK_02f550d4 + 0x2f5475c));
    func_0x01438628(*(undefined4 *)(_UNK_02f550d8 + 0x2f54768));
    func_0x01438628(*(undefined4 *)(_UNK_02f550dc + 0x2f54774));
    func_0x01438628(*(undefined4 *)(_UNK_02f550e0 + 0x2f54780));
    func_0x01438628(*(undefined4 *)(_UNK_02f550e4 + 0x2f5478c));
    func_0x01438628(*(undefined4 *)(_UNK_02f550e8 + 0x2f54798));
    func_0x01438628(*(undefined4 *)(_UNK_02f550ec + 0x2f547a4));
    func_0x01438628(*(undefined4 *)(_UNK_02f550f0 + 0x2f547b0));
    func_0x01438628(*(undefined4 *)(_UNK_02f550f4 + 0x2f547bc));
    func_0x01438628(*(undefined4 *)(_UNK_02f550f8 + 0x2f547c8));
    func_0x01438628(*(undefined4 *)(_UNK_02f550fc + 0x2f547d4));
    func_0x01438628(*(undefined4 *)(_UNK_02f55100 + 0x2f547e0));
    func_0x01438628(*(undefined4 *)(_UNK_02f55104 + 0x2f547ec));
    func_0x01438628(*(undefined4 *)(_UNK_02f55108 + 0x2f547f8));
    func_0x01438628(*(undefined4 *)(_UNK_02f5510c + 0x2f54804));
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
  iVar6 = func_0x02953fd4(0x6e31,0);
  if (iVar6 == 0) {
    iVar6 = func_0x014388d4(**(undefined4 **)(_UNK_02f55110 + 0x2f54878));
    func_0x02f560dc(iVar6,0);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar6 + 0x10) = param_1;
    *(undefined4 *)(iVar6 + 8) = param_2;
    func_0x014385cc((undefined4 *)(iVar6 + 0x10),param_1);
    iVar14 = *(int *)(iVar6 + 8);
    iVar7 = FUN_02f51be4(param_1);
    if (iVar7 <= iVar14) {
      piVar17 = *(int **)(_UNK_02f55114 + 0x2f548d0);
      if (*(int *)(*piVar17 + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar21 = *(undefined4 **)(_UNK_02f55118 + 0x2f548ec);
      iVar7 = func_0x04e4a028(*puVar21);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      piVar19 = *(int **)(_UNK_02f5511c + 0x2f5490c);
      iVar14 = *(int *)(iVar7 + 0x3c);
      iVar7 = *piVar19;
      if (*(int *)(iVar7 + 0x74) == 0) {
        func_0x014387a4();
        iVar7 = *piVar19;
      }
      iVar15 = *(int *)(*(int *)(iVar7 + 0x5c) + 8);
      if (iVar15 == 0) {
        if (*(int *)(iVar7 + 0x74) == 0) {
          func_0x014387a4();
          iVar7 = *piVar19;
        }
        uVar18 = **(undefined4 **)(iVar7 + 0x5c);
        iVar15 = func_0x014388d4(**(undefined4 **)(_UNK_02f55120 + 0x2f5495c));
        func_0x03a062d0(iVar15,uVar18,**(undefined4 **)(_UNK_02f55124 + 0x2f5497c),0);
        piVar19 = (int *)(*(int *)(*piVar19 + 0x5c) + 8);
        *piVar19 = iVar15;
        func_0x014385cc(piVar19,iVar15);
      }
      if (iVar14 == 0) {
        func_0x014388e4();
      }
      iVar7 = func_0x04cfe1c0(iVar14,iVar15,**(undefined4 **)(_UNK_02f55128 + 0x2f549b8));
      if (iVar7 != 0) {
        iVar14 = func_0x014388d4(**(undefined4 **)(_UNK_02f5512c + 0x2f549d8));
        func_0x04cfd1b4(iVar14,**(undefined4 **)(_UNK_02f55130 + 0x2f549ec));
        if (*(int *)(*piVar17 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar15 = func_0x04e4a028(*puVar21);
        if (iVar15 == 0) {
          func_0x014388e4();
        }
        iVar16 = *(int *)(iVar15 + 0x40);
        iVar15 = 0;
        puVar21 = *(undefined4 **)(_UNK_02f55134 + 0x2f54a44);
        puVar22 = *(undefined4 **)(_UNK_02f55138 + 0x2f54a4c);
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
            piVar17 = *(int **)(_UNK_02f5513c + 0x2f54af4);
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
            puVar22 = *(undefined4 **)(_UNK_02f55140 + 0x2f54b54);
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
              if (*(int *)(**(int **)(_UNK_02f55174 + 0x2f54f58) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar6 = func_0x0202346c(0);
              iVar7 = *piVar17;
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              uStack_4c = *(undefined4 *)(iVar7 + 8);
              uVar18 = func_0x01524ffc(&uStack_4c,0);
              iVar7 = *piVar17;
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              piVar19 = *(int **)(iVar7 + 0x10);
              if (piVar19 == (int *)0x0) {
                func_0x014388e4();
              }
              uVar9 = (**(code **)(*piVar19 + 0xd8))(piVar19,*(undefined4 *)(*piVar19 + 0xdc));
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              func_0x020257a4(iVar6,0x2f8,uVar18,uVar9,0,0,0);
              if (*(int *)(**(int **)(_UNK_02f55178 + 0x2f55024) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_02f5517c + 0x2f55040));
              iVar7 = *piVar17;
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              uVar18 = *(undefined4 *)(iVar7 + 0x18);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              func_0x02aac608(iVar6,uVar18,**(undefined4 **)(_UNK_02f55180 + 0x2f5507c),0,0);
            }
            else if (iVar7 == 1) {
              iVar7 = func_0x014388d4(**(undefined4 **)(_UNK_02f55144 + 0x2f54bd4));
              func_0x04cfd1b4(iVar7,**(undefined4 **)(_UNK_02f55148 + 0x2f54be8));
              iVar14 = 0;
              puVar21 = *(undefined4 **)(_UNK_02f5514c + 0x2f54c00);
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
                uVar10 = func_0x014388d4(**(undefined4 **)(_UNK_02f55150 + 0x2f54ca0));
                func_0x02ca3c70(uVar10,uVar18,uVar9,0,0);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar16 = *(int *)(iVar7 + 8);
                uVar23 = *(uint *)(iVar7 + 0xc);
                piVar19 = *(int **)(_UNK_02f55154 + 0x2f54cf0);
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
              if (*(int *)(**(int **)(_UNK_02f55158 + 0x2f54d54) + 0x74) == 0) {
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
              func_0x02025168(iVar15,uVar9,uVar18,0x79,0);
              func_0x02028d38(&uStack_48,0xf0,0);
              iVar14 = *piVar17;
              if (iVar14 == 0) {
                func_0x014388e4();
              }
              uStack_4c = *(undefined4 *)(iVar14 + 8);
              uStack_44 = func_0x01524ffc(&uStack_4c,0);
              func_0x014385cc((uint)&uStack_48 | 4,uStack_44);
              FUN_02f51c50(param_1);
              if (*(int *)(**(int **)(_UNK_02f5515c + 0x2f54e1c) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar14 = func_0x03b2c734(**(undefined4 **)(_UNK_02f55160 + 0x2f54e38));
              if (*(int *)(**(int **)(_UNK_02f55164 + 0x2f54e4c) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar15 = func_0x04e4a028(**(undefined4 **)(_UNK_02f55168 + 0x2f54e68));
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
              uVar12 = func_0x014388d4(**(undefined4 **)(_UNK_02f5516c + 0x2f54ebc));
              func_0x0152e3ec(uVar12,iVar6,**(undefined4 **)(_UNK_02f55170 + 0x2f54ee0),0);
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
    iVar6 = func_0x029540a4(0x6e31,0);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    func_0x0286c2b8(iVar6,param_1,param_2,0);
  }
  return;
}

