
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0314bc54(undefined4 param_1,undefined4 param_2)

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
  
  pcVar10 = (char *)(_UNK_0314c644 + 0x314bc70);
  if (*pcVar10 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0314c648 + 0x314bc84));
    func_0x01438628(*(undefined4 *)(_UNK_0314c64c + 0x314bc90));
    func_0x01438628(*(undefined4 *)(_UNK_0314c650 + 0x314bc9c));
    func_0x01438628(*(undefined4 *)(_UNK_0314c654 + 0x314bca8));
    func_0x01438628(*(undefined4 *)(_UNK_0314c658 + 0x314bcb4));
    func_0x01438628(*(undefined4 *)(_UNK_0314c65c + 0x314bcc0));
    func_0x01438628(*(undefined4 *)(_UNK_0314c660 + 0x314bccc));
    func_0x01438628(*(undefined4 *)(_UNK_0314c664 + 0x314bcd8));
    func_0x01438628(*(undefined4 *)(_UNK_0314c668 + 0x314bce4));
    func_0x01438628(*(undefined4 *)(_UNK_0314c66c + 0x314bcf0));
    func_0x01438628(*(undefined4 *)(_UNK_0314c670 + 0x314bcfc));
    func_0x01438628(*(undefined4 *)(_UNK_0314c674 + 0x314bd08));
    func_0x01438628(*(undefined4 *)(_UNK_0314c678 + 0x314bd14));
    func_0x01438628(*(undefined4 *)(_UNK_0314c67c + 0x314bd20));
    *pcVar10 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1764,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1764,0);
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
  if (*(int *)(**(int **)(_UNK_0314c680 + 0x314bd80) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0314c684 + 0x314bd9c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_0314c688 + 0x314bdbc));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar7 = *(int *)(iVar1 + 0x2fc);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = func_0x04753c80(iVar7,param_2,**(undefined4 **)(_UNK_0314c68c + 0x314bdf4));
  iVar13 = 0;
  if (iVar7 != 0) {
    iVar1 = *(int *)(iVar1 + 0x2fc);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x03b73d40(iVar1,param_2,**(undefined4 **)(_UNK_0314c690 + 0x314be28));
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
        iVar13 = func_0x014388d4(**(undefined4 **)(_UNK_0314c694 + 0x314be90));
        func_0x04cfd1b4(iVar13,**(undefined4 **)(_UNK_0314c698 + 0x314bea4));
        iVar7 = 0;
        puVar12 = *(undefined4 **)(_UNK_0314c69c + 0x314bebc);
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
          iVar5 = func_0x04cd2d7c(iVar5,uVar9,**(undefined4 **)(_UNK_0314c6a0 + 0x314bf58));
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
                  uVar9 = func_0x03b7661c(iVar6,iVar5,**(undefined4 **)(_UNK_0314c6a4 + 0x314c320));
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
                  uVar4 = func_0x03b7661c(iVar6,iVar5,**(undefined4 **)(_UNK_0314c6a8 + 0x314c38c));
                  uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_0314c6ac + 0x314c3a4));
                  uStack_28 = 0;
                  func_0x02ca3c70(uVar2,uVar9,uVar4,0);
                  if (iVar13 == 0) {
                    func_0x014388e4();
                  }
                  iVar6 = *(int *)(iVar13 + 8);
                  uVar8 = *(uint *)(iVar13 + 0xc);
                  piVar3 = *(int **)(_UNK_0314c6b0 + 0x314c3f4);
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
                  puVar12 = *(undefined4 **)(_UNK_0314c6b4 + 0x314c450);
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
              if (*(char *)(iVar5 + 0x28) == '\0') {
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
                  iVar6 = *(int *)(iVar6 + 0x2c);
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
                  iVar6 = *(int *)(iVar6 + 0x2c);
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  uVar9 = func_0x03b7661c(iVar6,iVar5,**(undefined4 **)(_UNK_0314c6b8 + 0x314c510));
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
                  iVar6 = *(int *)(iVar6 + 0x30);
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  uVar4 = func_0x03b7661c(iVar6,iVar5,**(undefined4 **)(_UNK_0314c6bc + 0x314c57c));
                  uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_0314c6c0 + 0x314c594));
                  uStack_28 = 0;
                  func_0x02ca3c70(uVar2,uVar9,uVar4,0);
                  if (iVar13 == 0) {
                    func_0x014388e4();
                  }
                  iVar6 = *(int *)(iVar13 + 8);
                  uVar8 = *(uint *)(iVar13 + 0xc);
                  piVar3 = *(int **)(_UNK_0314c6c4 + 0x314c5e4);
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
                  puVar12 = *(undefined4 **)(_UNK_0314c6c8 + 0x314c640);
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
                uVar9 = func_0x03b7661c(iVar6,iVar5,**(undefined4 **)(_UNK_0314c6cc + 0x314c130));
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
                uVar4 = func_0x03b7661c(iVar6,iVar5,**(undefined4 **)(_UNK_0314c6d0 + 0x314c19c));
                uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_0314c6d4 + 0x314c1b4));
                uStack_28 = 0;
                func_0x02ca3c70(uVar2,uVar9,uVar4,0);
                if (iVar13 == 0) {
                  func_0x014388e4();
                }
                iVar6 = *(int *)(iVar13 + 8);
                uVar8 = *(uint *)(iVar13 + 0xc);
                piVar3 = *(int **)(_UNK_0314c6d8 + 0x314c204);
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
                puVar12 = *(undefined4 **)(_UNK_0314c6dc + 0x314c260);
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

