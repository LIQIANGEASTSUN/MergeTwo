
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_032100dc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  char *pcVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar10 = (char *)(_UNK_03210890 + 0x32100f8);
  if (*pcVar10 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03210894 + 0x321010c));
    func_0x01438628(*(undefined4 *)(_UNK_03210898 + 0x3210118));
    func_0x01438628(*(undefined4 *)(_UNK_0321089c + 0x3210124));
    func_0x01438628(*(undefined4 *)(_UNK_032108a0 + 0x3210130));
    func_0x01438628(*(undefined4 *)(_UNK_032108a4 + 0x321013c));
    func_0x01438628(*(undefined4 *)(_UNK_032108a8 + 0x3210148));
    func_0x01438628(*(undefined4 *)(_UNK_032108ac + 0x3210154));
    func_0x01438628(*(undefined4 *)(_UNK_032108b0 + 0x3210160));
    func_0x01438628(*(undefined4 *)(_UNK_032108b4 + 0x321016c));
    func_0x01438628(*(undefined4 *)(_UNK_032108b8 + 0x3210178));
    func_0x01438628(*(undefined4 *)(_UNK_032108bc + 0x3210184));
    func_0x01438628(*(undefined4 *)(_UNK_032108c0 + 0x3210190));
    func_0x01438628(*(undefined4 *)(_UNK_032108c4 + 0x321019c));
    func_0x01438628(*(undefined4 *)(_UNK_032108c8 + 0x32101a8));
    *pcVar10 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x140b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x140b,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar10 = (char *)(_UNK_02875bcc + 0x2875ad8);
    if (*pcVar10 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02875bd0 + 0x2875aec),param_1,param_2,0);
      *pcVar10 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a6c(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar7,uVar9,&uStack_38,uVar4,0,0);
    iVar1 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_02875bd4 + 0x2875bbc));
    return iVar1;
  }
  if (*(int *)(**(int **)(_UNK_032108cc + 0x3210208) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_032108d0 + 0x3210224));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_032108d4 + 0x3210244));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar7 = *(int *)(iVar1 + 0x2b8);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = func_0x04753c80(iVar7,param_2,**(undefined4 **)(_UNK_032108d8 + 0x321027c));
  iVar13 = 0;
  if (iVar7 != 0) {
    iVar1 = *(int *)(iVar1 + 0x2b8);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x03b73d40(iVar1,param_2,**(undefined4 **)(_UNK_032108dc + 0x32102b0));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar7 = *(int *)(iVar1 + 0x6c);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    if (*(char *)(iVar7 + 8) != '\0') {
      iVar7 = *(int *)(iVar1 + 0x6c);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      if (*(char *)(iVar7 + 0x14) == '\0') {
        iVar13 = func_0x014388d4(**(undefined4 **)(_UNK_032108e0 + 0x3210318));
        func_0x04cfd1b4(iVar13,**(undefined4 **)(_UNK_032108e4 + 0x321032c));
        iVar7 = 0;
        puVar12 = *(undefined4 **)(_UNK_032108e8 + 0x3210344);
        while( true ) {
          iVar5 = *(int *)(iVar1 + 0x6c);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = *(int *)(iVar5 + 0xc);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar5 + 0xc) <= iVar7) break;
          iVar6 = *(int *)(iVar1 + 0x6c);
          iVar5 = iVar6;
          if (iVar6 == 0) {
            func_0x014388e4();
            iVar5 = *(int *)(iVar1 + 0x6c);
            if (iVar5 == 0) {
              func_0x014388e4();
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
          }
          iVar11 = *(int *)(iVar5 + 0xc);
          iVar5 = *(int *)(iVar6 + 0x10);
          if (iVar11 == 0) {
            func_0x014388e4();
          }
          iVar6 = func_0x03b780b0(iVar11,iVar7,*puVar12);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          uVar9 = *(undefined4 *)(iVar6 + 0x24);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = func_0x04cd2d7c(iVar5,uVar9,**(undefined4 **)(_UNK_032108ec + 0x32103e0));
          if (iVar5 != 0) {
            iVar5 = *(int *)(iVar1 + 0x6c);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            if (*(char *)(iVar5 + 9) != '\0') {
              iVar5 = *(int *)(iVar1 + 0x6c);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              iVar5 = *(int *)(iVar5 + 0xc);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              iVar5 = func_0x03b780b0(iVar5,iVar7,*puVar12);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              if (*(char *)(iVar5 + 0xd) == '\0') {
                iVar5 = 0;
                while( true ) {
                  iVar6 = *(int *)(iVar1 + 0x6c);
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  iVar6 = *(int *)(iVar6 + 0xc);
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  iVar6 = func_0x03b780b0(iVar6,iVar7,*puVar12);
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  iVar6 = *(int *)(iVar6 + 0x14);
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  if (*(int *)(iVar6 + 0xc) <= iVar5) break;
                  iVar6 = *(int *)(iVar1 + 0x6c);
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  iVar6 = *(int *)(iVar6 + 0xc);
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  iVar6 = func_0x03b780b0(iVar6,iVar7,*puVar12);
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  iVar6 = *(int *)(iVar6 + 0x14);
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  uVar9 = func_0x03b7661c(iVar6,iVar5,**(undefined4 **)(_UNK_032108f0 + 0x321075c));
                  iVar6 = *(int *)(iVar1 + 0x6c);
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  iVar6 = *(int *)(iVar6 + 0xc);
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  iVar6 = func_0x03b780b0(iVar6,iVar7,*puVar12);
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  iVar6 = *(int *)(iVar6 + 0x18);
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  uVar4 = func_0x03b7661c(iVar6,iVar5,**(undefined4 **)(_UNK_032108f4 + 0x32107c8));
                  uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_032108f8 + 0x32107e0));
                  uStack_28 = 0;
                  func_0x02ca3c70(uVar2,uVar9,uVar4,0);
                  if (iVar13 == 0) {
                    func_0x014388e4();
                  }
                  iVar6 = *(int *)(iVar13 + 8);
                  uVar8 = *(uint *)(iVar13 + 0xc);
                  piVar3 = *(int **)(_UNK_032108fc + 0x3210830);
                  *(int *)(iVar13 + 0x10) = *(int *)(iVar13 + 0x10) + 1;
                  iVar11 = *piVar3;
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  if (uVar8 < *(uint *)(iVar6 + 0xc)) {
                    *(uint *)(iVar13 + 0xc) = uVar8 + 1;
                    puVar12 = (undefined4 *)(iVar6 + uVar8 * 4 + 0x10);
                    *puVar12 = uVar2;
                    func_0x014385cc(puVar12,uVar2);
                  }
                  else {
                    func_0x04cfda38(iVar13,uVar2,
                                    *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38)
                                   );
                  }
                  iVar5 = iVar5 + 1;
                  puVar12 = *(undefined4 **)(_UNK_03210900 + 0x321088c);
                }
              }
            }
            iVar5 = *(int *)(iVar1 + 0x6c);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = *(int *)(iVar5 + 0xc);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x03b780b0(iVar5,iVar7,*puVar12);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            if (*(char *)(iVar5 + 0xc) == '\0') {
              iVar5 = 0;
              while( true ) {
                iVar6 = *(int *)(iVar1 + 0x6c);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                iVar6 = *(int *)(iVar6 + 0xc);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                iVar6 = func_0x03b780b0(iVar6,iVar7,*puVar12);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                iVar6 = *(int *)(iVar6 + 0x1c);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                if (*(int *)(iVar6 + 0xc) <= iVar5) break;
                iVar6 = *(int *)(iVar1 + 0x6c);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                iVar6 = *(int *)(iVar6 + 0xc);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                iVar6 = func_0x03b780b0(iVar6,iVar7,*puVar12);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                iVar6 = *(int *)(iVar6 + 0x1c);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                uVar9 = func_0x03b7661c(iVar6,iVar5,**(undefined4 **)(_UNK_03210904 + 0x321056c));
                iVar6 = *(int *)(iVar1 + 0x6c);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                iVar6 = *(int *)(iVar6 + 0xc);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                iVar6 = func_0x03b780b0(iVar6,iVar7,*puVar12);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                iVar6 = *(int *)(iVar6 + 0x20);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                uVar4 = func_0x03b7661c(iVar6,iVar5,**(undefined4 **)(_UNK_03210908 + 0x32105d8));
                uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_0321090c + 0x32105f0));
                uStack_28 = 0;
                func_0x02ca3c70(uVar2,uVar9,uVar4,0);
                if (iVar13 == 0) {
                  func_0x014388e4();
                }
                iVar6 = *(int *)(iVar13 + 8);
                uVar8 = *(uint *)(iVar13 + 0xc);
                piVar3 = *(int **)(_UNK_03210910 + 0x3210640);
                *(int *)(iVar13 + 0x10) = *(int *)(iVar13 + 0x10) + 1;
                iVar11 = *piVar3;
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                if (uVar8 < *(uint *)(iVar6 + 0xc)) {
                  *(uint *)(iVar13 + 0xc) = uVar8 + 1;
                  puVar12 = (undefined4 *)(iVar6 + uVar8 * 4 + 0x10);
                  *puVar12 = uVar2;
                  func_0x014385cc(puVar12,uVar2);
                }
                else {
                  func_0x04cfda38(iVar13,uVar2,
                                  *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
                }
                iVar5 = iVar5 + 1;
                puVar12 = *(undefined4 **)(_UNK_03210914 + 0x321069c);
              }
            }
          }
          iVar7 = iVar7 + 1;
        }
      }
    }
  }
  return iVar13;
}

