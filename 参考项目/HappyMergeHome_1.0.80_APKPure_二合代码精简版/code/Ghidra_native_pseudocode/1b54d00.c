
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01b64d00(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 extraout_r1;
  undefined4 uVar11;
  char *pcVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  int iVar18;
  int *piVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar12 = (char *)(_UNK_01b657dc + 0x1b64d20);
  if (*pcVar12 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b657e0 + 0x1b64d34));
    func_0x01438628(*(undefined4 *)(_UNK_01b657e4 + 0x1b64d40));
    func_0x01438628(*(undefined4 *)(_UNK_01b657e8 + 0x1b64d4c));
    func_0x01438628(*(undefined4 *)(_UNK_01b657ec + 0x1b64d58));
    func_0x01438628(*(undefined4 *)(_UNK_01b657f0 + 0x1b64d64));
    func_0x01438628(*(undefined4 *)(_UNK_01b657f4 + 0x1b64d70));
    func_0x01438628(*(undefined4 *)(_UNK_01b657f8 + 0x1b64d7c));
    func_0x01438628(*(undefined4 *)(_UNK_01b657fc + 0x1b64d88));
    func_0x01438628(*(undefined4 *)(_UNK_01b65800 + 0x1b64d94));
    func_0x01438628(*(undefined4 *)(_UNK_01b65804 + 0x1b64da0));
    func_0x01438628(*(undefined4 *)(_UNK_01b65808 + 0x1b64dac));
    func_0x01438628(*(undefined4 *)(_UNK_01b6580c + 0x1b64db8));
    func_0x01438628(*(undefined4 *)(_UNK_01b65810 + 0x1b64dc4));
    func_0x01438628(*(undefined4 *)(_UNK_01b65814 + 0x1b64dd0));
    func_0x01438628(*(undefined4 *)(_UNK_01b65818 + 0x1b64ddc));
    func_0x01438628(*(undefined4 *)(_UNK_01b6581c + 0x1b64de8));
    func_0x01438628(*(undefined4 *)(_UNK_01b65820 + 0x1b64df4));
    func_0x01438628(*(undefined4 *)(_UNK_01b65824 + 0x1b64e00));
    func_0x01438628(*(undefined4 *)(_UNK_01b65828 + 0x1b64e0c));
    func_0x01438628(*(undefined4 *)(_UNK_01b6582c + 0x1b64e18));
    func_0x01438628(*(undefined4 *)(_UNK_01b65830 + 0x1b64e24));
    func_0x01438628(*(undefined4 *)(_UNK_01b65834 + 0x1b64e30));
    func_0x01438628(*(undefined4 *)(_UNK_01b65838 + 0x1b64e3c));
    func_0x01438628(*(undefined4 *)(_UNK_01b6583c + 0x1b64e48));
    func_0x01438628(*(undefined4 *)(_UNK_01b65840 + 0x1b64e54));
    func_0x01438628(*(undefined4 *)(_UNK_01b65844 + 0x1b64e60));
    func_0x01438628(*(undefined4 *)(_UNK_01b65848 + 0x1b64e6c));
    func_0x01438628(*(undefined4 *)(_UNK_01b6584c + 0x1b64e78));
    *pcVar12 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  iVar7 = func_0x02953fd4(0x2d0f,0);
  if (iVar7 == 0) {
    if ((((param_2 != 0) && (iVar7 = FUN_01b5ba7c(param_1), iVar7 != 0)) &&
        (iVar7 = FUN_01b5797c(param_1), iVar7 != 0)) &&
       ((iVar7 = FUN_01b633e8(param_1), iVar7 != 0 && (0 < *(int *)(iVar7 + 0xc))))) {
      iVar18 = 0;
      puVar17 = *(undefined4 **)(_UNK_01b65850 + 0x1b64f44);
      do {
        iVar8 = func_0x0152983c(iVar7,iVar18,**(undefined4 **)(_UNK_01b65854 + 0x1b64f50));
        if (iVar8 != 0) {
          iVar8 = FUN_01b63b08(param_1,iVar8);
          iVar13 = 0;
          while( true ) {
            if (iVar8 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar8 + 0xc) <= iVar13) break;
            iVar9 = func_0x0152983c(iVar8,iVar13,*puVar17);
            if (((iVar9 != 0) && (*(int *)(iVar9 + 0x14) == 2)) &&
               (*(int *)(iVar9 + 0x18) == *(int *)(param_2 + 8))) {
              iVar7 = FUN_01b5ba7c(param_1);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              iVar7 = *(int *)(iVar7 + 0x18);
              puVar17 = (undefined4 *)(param_2 + 8);
              uVar14 = *puVar17;
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              iVar7 = func_0x024f0540(iVar7,uVar14,**(undefined4 **)(_UNK_01b65858 + 0x1b65028));
              if (iVar7 == 0) {
                iVar7 = FUN_01b5ba7c(param_1);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar7 = *(int *)(iVar7 + 0x18);
                uVar14 = *puVar17;
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                func_0x024f10d0(iVar7,uVar14,0,**(undefined4 **)(_UNK_01b6585c + 0x1b6507c));
              }
              iVar7 = FUN_01b5ba7c(param_1);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              iVar7 = *(int *)(iVar7 + 0x18);
              uVar14 = *puVar17;
              if (iVar7 == 0) {
                func_0x014388e4();
                iVar18 = func_0x024f05d4(0,uVar14,**(undefined4 **)(_UNK_01b65864 + 0x1b650e8));
                iStack_4c = iVar18;
                func_0x014388e4();
              }
              else {
                iVar18 = func_0x024f05d4(iVar7,uVar14,**(undefined4 **)(_UNK_01b65860 + 0x1b650c0));
                iStack_4c = iVar18;
              }
              func_0x024f10d4(iVar7,uVar14,iVar18 + 1,**(undefined4 **)(_UNK_01b65868 + 0x1b65110));
              iVar7 = FUN_01b5ba7c(param_1);
              if (*(int *)(**(int **)(_UNK_01b6586c + 0x1b65130) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar18 = func_0x014e9518(**(undefined4 **)(_UNK_01b65870 + 0x1b6514c));
              if (iVar18 == 0) {
                func_0x014388e4();
              }
              uVar21 = func_0x026ffbe0(iVar18,0);
              uVar16 = (undefined4)((ulonglong)uVar21 >> 0x20);
              uVar14 = uVar16;
              if (iVar7 == 0) {
                func_0x014388e4();
                uVar14 = extraout_r1;
              }
              func_0x026bfd40(iVar7,uVar14,(int)uVar21,uVar16,0);
              iVar7 = FUN_01b5ba7c(param_1);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              func_0x026bfe10(iVar7,*(int *)(iVar7 + 0x40) + 1,0);
              uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
              uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
              uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
              puVar15 = (undefined4 *)((uint)&uStack_48 | 4);
              uStack_48 = 0xea;
              uStack_38 = 0;
              *puVar15 = 0;
              puVar15[1] = uStack_34;
              puVar15[2] = uStack_30;
              puVar15[3] = uStack_2c;
              iStack_4c = *(int *)(iVar9 + 8);
              uStack_44 = func_0x01524ffc(&iStack_4c,0);
              func_0x014385cc(puVar15,uStack_44);
              uVar14 = *(undefined4 *)(iVar9 + 0xc);
              uVar16 = *(undefined4 *)(iVar9 + 0x10);
              if (*(int *)(**(int **)(_UNK_01b65874 + 0x1b65210) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar7 = func_0x02af43a8(uVar14,uVar16,0);
              iVar18 = 0;
              piVar19 = *(int **)(_UNK_01b65878 + 0x1b65258);
              while( true ) {
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                if (*(int *)(iVar7 + 0xc) <= iVar18) break;
                iVar8 = func_0x0152983c(iVar7,iVar18,**(undefined4 **)(_UNK_01b6587c + 0x1b65284));
                iVar13 = **(int **)(*piVar19 + 0x5c);
                if (iVar8 == 0) {
                  func_0x014388e4();
                }
                uVar14 = *(undefined4 *)(iVar8 + 8);
                if (iVar13 == 0) {
                  func_0x014388e4();
                }
                iVar13 = func_0x02e651cc(iVar13,uVar14,0);
                if ((iVar13 == 0) &&
                   (iVar13 = FUN_01b6243c(param_1,*(undefined4 *)(iVar8 + 8)), iVar13 != 0)) {
                  if (0 < *(int *)(iVar8 + 0xc)) {
                    iVar13 = 0;
                    do {
                      iVar9 = FUN_01b5ba7c(param_1);
                      if (iVar9 == 0) {
                        func_0x014388e4();
                      }
                      iVar9 = *(int *)(iVar9 + 0x14);
                      uVar14 = *(undefined4 *)(iVar8 + 8);
                      if (iVar9 == 0) {
                        func_0x014388e4();
                      }
                      func_0x024f05ac(iVar9,uVar14,**(undefined4 **)(_UNK_01b65880 + 0x1b65334));
                      if (*(int *)(**(int **)(_UNK_01b65884 + 0x1b65348) + 0x74) == 0) {
                        func_0x014387a4();
                      }
                      iVar9 = func_0x0202346c(0);
                      iVar10 = func_0x014388d4(**(undefined4 **)(_UNK_01b65888 + 0x1b65370));
                      func_0x02025440(iVar10,0);
                      if (iVar10 == 0) {
                        func_0x014388e4();
                        uVar14 = *(undefined4 *)(iVar8 + 8);
                        uRam00000008 = 0x78;
                        func_0x014388e4();
                      }
                      else {
                        uVar14 = *(undefined4 *)(iVar8 + 8);
                        *(undefined4 *)(iVar10 + 8) = 0x78;
                      }
                      *(undefined1 *)(iVar10 + 0x25) = 1;
                      *(undefined4 *)(iVar10 + 0xc) = uVar14;
                      if (iVar9 == 0) {
                        func_0x014388e4();
                      }
                      func_0x02024d08(iVar9,iVar10,1,0);
                      iVar13 = iVar13 + 1;
                    } while (iVar13 < *(int *)(iVar8 + 0xc));
                  }
                }
                else {
                  uVar6 = uStack_2c;
                  uVar5 = uStack_30;
                  uVar4 = uStack_34;
                  uVar3 = uStack_38;
                  uVar2 = uStack_3c;
                  uVar1 = uStack_40;
                  uVar16 = uStack_44;
                  uVar14 = uStack_48;
                  uVar20 = *(undefined4 *)(iVar8 + 8);
                  uVar11 = *(undefined4 *)(iVar8 + 0xc);
                  iVar8 = **(int **)(*piVar19 + 0x5c);
                  if (iVar8 == 0) {
                    func_0x014388e4();
                  }
                  func_0x02e64460(iVar8,uVar20,uVar11,uVar5,uVar14,uVar16,uVar1,uVar2,uVar3,uVar4,
                                  uVar5,uVar6,1,0,0,0);
                  piVar19 = *(int **)(_UNK_01b6588c + 0x1b6549c);
                }
                iVar18 = iVar18 + 1;
              }
              if (*(int *)(**(int **)(_UNK_01b65890 + 0x1b654b0) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar18 = func_0x0202346c(0);
              uVar14 = func_0x01524ffc(puVar17,0);
              if (iVar18 == 0) {
                func_0x014388e4();
              }
              func_0x020257a4(iVar18,0x2f3,uVar14,0,0,0,0);
              if (*(int *)(**(int **)(_UNK_01b65894 + 0x1b6552c) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar18 = func_0x014e9518(**(undefined4 **)(_UNK_01b65898 + 0x1b65548));
              piVar19 = *(int **)(_UNK_01b6589c + 0x1b6555c);
              iVar8 = *piVar19;
              if (*(int *)(iVar8 + 0x74) == 0) {
                func_0x014387a4();
                iVar8 = *piVar19;
              }
              uVar14 = *(undefined4 *)(*(int *)(iVar8 + 0x5c) + 0x1ac);
              piVar19 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_01b658a0 + 0x1b65580),1);
              if (piVar19 == (int *)0x0) {
                func_0x014388e4();
              }
              iVar8 = func_0x014387a8(iVar7,*(undefined4 *)(*piVar19 + 0x20));
              if (iVar8 == 0) {
                uVar16 = func_0x01438904();
                func_0x01438790(uVar16,0);
              }
              if (piVar19[3] == 0) {
                func_0x014388e8();
              }
              piVar19[4] = iVar7;
              func_0x014385cc(piVar19 + 4,iVar7);
              if (iVar18 == 0) {
                func_0x014388e4();
              }
              func_0x029901b4(iVar18,uVar14,piVar19,0);
              if (*(int *)(**(int **)(_UNK_01b658a4 + 0x1b6560c) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar18 = func_0x03b2c734(**(undefined4 **)(_UNK_01b658a8 + 0x1b65628));
              if (*(int *)(**(int **)(_UNK_01b658ac + 0x1b6563c) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar8 = func_0x014e9518(**(undefined4 **)(_UNK_01b658b0 + 0x1b65658));
              if (iVar8 == 0) {
                func_0x014388e4();
              }
              uVar6 = uStack_2c;
              uVar5 = uStack_30;
              uVar4 = uStack_34;
              uVar3 = uStack_38;
              uVar2 = uStack_3c;
              uVar1 = uStack_40;
              uVar16 = uStack_44;
              uVar14 = uStack_48;
              uVar11 = *(undefined4 *)(iVar8 + 0x10);
              piVar19 = *(int **)(_UNK_01b658b4 + 0x1b656b0);
              iVar8 = *piVar19;
              if (*(int *)(iVar8 + 0x74) == 0) {
                func_0x014387a4();
                iVar8 = *piVar19;
              }
              iVar13 = *(int *)(*(int *)(iVar8 + 0x5c) + 8);
              if (iVar13 == 0) {
                if (*(int *)(iVar8 + 0x74) == 0) {
                  func_0x014387a4();
                  iVar8 = *piVar19;
                }
                uVar20 = **(undefined4 **)(iVar8 + 0x5c);
                iVar13 = func_0x014388d4(**(undefined4 **)(_UNK_01b658b8 + 0x1b65704));
                func_0x0152e3ec(iVar13,uVar20,**(undefined4 **)(_UNK_01b658bc + 0x1b65724),0);
                piVar19 = (int *)(*(int *)(*piVar19 + 0x5c) + 8);
                *piVar19 = iVar13;
                func_0x014385cc(piVar19,iVar13);
              }
              if (iVar18 == 0) {
                func_0x014388e4();
              }
              func_0x02b75870(iVar18,iVar7,uVar11,0,uVar14,uVar16,uVar1,uVar2,uVar3,uVar4,uVar5,
                              uVar6,iVar13,0,0);
              iVar7 = FUN_01b5ba7c(param_1);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              func_0x026bfecc(iVar7,0,0);
              FUN_01b63f14(param_1);
              return;
            }
            iVar13 = iVar13 + 1;
          }
        }
        iVar18 = iVar18 + 1;
      } while (iVar18 < *(int *)(iVar7 + 0xc));
    }
  }
  else {
    iVar7 = func_0x029540a4(0x2d0f,0);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    func_0x02869298(iVar7,param_1,param_2,0);
  }
  return;
}

