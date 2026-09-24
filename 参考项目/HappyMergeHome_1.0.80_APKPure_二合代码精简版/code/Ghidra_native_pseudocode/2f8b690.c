
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_02f9b690(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int *piVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  uint uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar10 = (char *)(_UNK_02f9c1a8 + 0x2f9b6a4);
  if (*pcVar10 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f9c1ac + 0x2f9b6b8));
    func_0x01438628(*(undefined4 *)(_UNK_02f9c1b0 + 0x2f9b6c4));
    func_0x01438628(*(undefined4 *)(_UNK_02f9c1b4 + 0x2f9b6d0));
    func_0x01438628(*(undefined4 *)(_UNK_02f9c1b8 + 0x2f9b6dc));
    func_0x01438628(*(undefined4 *)(_UNK_02f9c1bc + 0x2f9b6e8));
    func_0x01438628(*(undefined4 *)(_UNK_02f9c1c0 + 0x2f9b6f4));
    func_0x01438628(*(undefined4 *)(_UNK_02f9c1c4 + 0x2f9b700));
    func_0x01438628(*(undefined4 *)(_UNK_02f9c1c8 + 0x2f9b70c));
    func_0x01438628(*(undefined4 *)(_UNK_02f9c1cc + 0x2f9b718));
    func_0x01438628(*(undefined4 *)(_UNK_02f9c1d0 + 0x2f9b724));
    func_0x01438628(*(undefined4 *)(_UNK_02f9c1d4 + 0x2f9b730));
    func_0x01438628(*(undefined4 *)(_UNK_02f9c1d8 + 0x2f9b73c));
    func_0x01438628(*(undefined4 *)(_UNK_02f9c1dc + 0x2f9b748));
    func_0x01438628(*(undefined4 *)(_UNK_02f9c1e0 + 0x2f9b754));
    func_0x01438628(*(undefined4 *)(_UNK_02f9c1e4 + 0x2f9b760));
    func_0x01438628(*(undefined4 *)(_UNK_02f9c1e8 + 0x2f9b76c));
    func_0x01438628(*(undefined4 *)(_UNK_02f9c1ec + 0x2f9b778));
    func_0x01438628(*(undefined4 *)(_UNK_02f9c1f0 + 0x2f9b784));
    func_0x01438628(*(undefined4 *)(_UNK_02f9c1f4 + 0x2f9b790));
    func_0x01438628(*(undefined4 *)(_UNK_02f9c1f8 + 0x2f9b79c));
    func_0x01438628(*(undefined4 *)(_UNK_02f9c1fc + 0x2f9b7a8));
    func_0x01438628(*(undefined4 *)(_UNK_02f9c200 + 0x2f9b7b4));
    func_0x01438628(*(undefined4 *)(_UNK_02f9c204 + 0x2f9b7c0));
    func_0x01438628(*(undefined4 *)(_UNK_02f9c208 + 0x2f9b7cc));
    func_0x01438628(*(undefined4 *)(_UNK_02f9c20c + 0x2f9b7d8));
    func_0x01438628(*(undefined4 *)(_UNK_02f9c210 + 0x2f9b7e4));
    func_0x01438628(*(undefined4 *)(_UNK_02f9c214 + 0x2f9b7f0));
    func_0x01438628(*(undefined4 *)(_UNK_02f9c218 + 0x2f9b7fc));
    func_0x01438628(*(undefined4 *)(_UNK_02f9c21c + 0x2f9b808));
    func_0x01438628(*(undefined4 *)(_UNK_02f9c220 + 0x2f9b814));
    func_0x01438628(*(undefined4 *)(_UNK_02f9c224 + 0x2f9b820));
    func_0x01438628(*(undefined4 *)(_UNK_02f9c228 + 0x2f9b82c));
    func_0x01438628(*(undefined4 *)(_UNK_02f9c22c + 0x2f9b838));
    *pcVar10 = '\x01';
  }
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  iVar1 = func_0x02953fd4(0x14e3,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02f9c230 + 0x2f9b8b4));
    func_0x04cfd1b4(iVar1,**(undefined4 **)(_UNK_02f9c234 + 0x2f9b8c4));
    if (*(int *)(**(int **)(_UNK_02f9c238 + 0x2f9b8d8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_02f9c23c + 0x2f9b8f4));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x036c7bec(iVar2,**(undefined4 **)(_UNK_02f9c240 + 0x2f9b914));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0x380);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar3 = func_0x047536e4(iVar2,**(undefined4 **)(_UNK_02f9c244 + 0x2f9b948));
    iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_02f9c248 + 0x2f9b960));
    func_0x04cfd2f0(iVar2,uVar3,**(undefined4 **)(_UNK_02f9c24c + 0x2f9b978));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_70 = *(int *)(iVar2 + 0xc) - 1;
    if (-1 < (int)uStack_70) {
      do {
        if (*(int *)(**(int **)(_UNK_02f9c250 + 0x2f9b9b4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_02f9c254 + 0x2f9b9d0));
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = func_0x036c7bec(iVar4,**(undefined4 **)(_UNK_02f9c258 + 0x2f9b9f0));
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = *(int *)(iVar4 + 0x380);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar3 = func_0x04cfd760(iVar2,uStack_70,**(undefined4 **)(_UNK_02f9c25c + 0x2f9ba24));
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = func_0x03b73d40(iVar4,uVar3,**(undefined4 **)(_UNK_02f9c260 + 0x2f9ba50));
        if (*(int *)(**(int **)(_UNK_02f9c264 + 0x2f9ba68) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar5 = FUN_02f9b1c4(iVar4);
        if (iVar5 != 0) {
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          iVar5 = *(int *)(iVar4 + 0x10);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          func_0x04cd366c(&uStack_68,iVar5,**(undefined4 **)(_UNK_02f9c268 + 0x2f9bab8));
          uStack_38 = uStack_68;
          uStack_34 = uStack_64;
          uStack_30 = uStack_60;
          uStack_2c = uStack_5c;
          while (iVar5 = func_0x04873f24(&uStack_38,**(undefined4 **)(_UNK_02f9c26c + 0x2f9bad4)),
                uVar3 = uStack_2c, iVar5 != 0) {
            iVar5 = *(int *)(iVar4 + 0x48);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x04cd2d7c(iVar5,uVar3,**(undefined4 **)(_UNK_02f9c270 + 0x2f9bb04));
            if (iVar5 == 0) {
              iVar5 = *(int *)(iVar4 + 0x14);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              iVar5 = func_0x046c26fc(iVar5,uVar3,**(undefined4 **)(_UNK_02f9c274 + 0x2f9bb34));
              if (iVar5 == 0) {
                iVar5 = *(int *)(iVar4 + 0x14);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                func_0x03b70cd0(iVar5,uVar3,0,**(undefined4 **)(_UNK_02f9c278 + 0x2f9bb64));
              }
              iVar5 = *(int *)(iVar4 + 0x14);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              iVar6 = func_0x03b70fac(iVar5,uVar3,**(undefined4 **)(_UNK_02f9c27c + 0x2f9bb90));
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              func_0x03b70fe4(iVar5,uVar3,iVar6 + 1,**(undefined4 **)(_UNK_02f9c280 + 0x2f9bbb8));
            }
          }
          func_0x04873f20(&uStack_38,**(undefined4 **)(_UNK_02f9c290 + 0x2f9bbd8));
          iVar5 = *(int *)(iVar4 + 0x10);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          func_0x03b75c84(iVar5,**(undefined4 **)(_UNK_02f9c288 + 0x2f9bbfc));
          iVar5 = *(int *)(iVar4 + 0x14);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          func_0x046c2934(&uStack_68,iVar5,**(undefined4 **)(_UNK_02f9c28c + 0x2f9bc28));
          bVar14 = false;
          uStack_50 = uStack_68;
          uStack_4c = uStack_64;
          uStack_48 = uStack_60;
          uStack_44 = uStack_5c;
          uStack_40 = uStack_58;
          while (iVar5 = func_0x048a44e0(&uStack_50,**(undefined4 **)(_UNK_02f9c2a8 + 0x2f9bc54)),
                uVar3 = uStack_44, iVar5 != 0) {
            iVar6 = *(int *)(iVar4 + 0x48);
            iVar5 = (int)uStack_40;
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar6 = func_0x04cd2d7c(iVar6,uVar3,**(undefined4 **)(_UNK_02f9c298 + 0x2f9bc88));
            if (iVar6 == 0) {
              iVar6 = *(int *)(iVar4 + 100);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              iVar6 = func_0x04cd2d7c(iVar6,uVar3,**(undefined4 **)(_UNK_02f9c29c + 0x2f9bcb8));
              if (0 < iVar5 && iVar6 == 0) {
                uVar7 = func_0x014388d4(**(undefined4 **)(_UNK_02f9c2a0 + 0x2f9bce4));
                func_0x02ca3c70(uVar7,uVar3,iVar5,0,0);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                iVar5 = *(int *)(iVar1 + 8);
                uVar13 = *(uint *)(iVar1 + 0xc);
                piVar9 = *(int **)(_UNK_02f9c2a4 + 0x2f9bd3c);
                *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
                iVar6 = *piVar9;
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                if (uVar13 < *(uint *)(iVar5 + 0xc)) {
                  bVar14 = true;
                  *(uint *)(iVar1 + 0xc) = uVar13 + 1;
                  puVar8 = (undefined4 *)(iVar5 + uVar13 * 4 + 0x10);
                  *puVar8 = uVar7;
                  func_0x014385cc(puVar8,uVar7);
                }
                else {
                  bVar14 = true;
                  func_0x04cfda38(iVar1,uVar7,
                                  *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38));
                }
              }
            }
          }
          func_0x048a4620(&uStack_50,**(undefined4 **)(_UNK_02f9c2ac + 0x2f9bda4));
          if (*(int *)(**(int **)(_UNK_02f9c2b4 + 0x2f9bdb8) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar5 = FUN_02f8feac();
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          uVar3 = func_0x04cfd760(iVar2,uStack_70,**(undefined4 **)(_UNK_02f9c2b8 + 0x2f9bde8));
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = func_0x02f9c2e0(iVar5,uVar3);
          if (iVar5 != 0) {
            iVar6 = 0;
            while( true ) {
              iVar11 = *(int *)(iVar5 + 0xc);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              if (iVar11 <= iVar6) break;
              iVar12 = *(int *)(iVar4 + 0x48);
              iVar11 = func_0x04cfd760(iVar5,iVar6,**(undefined4 **)(_UNK_02f9c2c0 + 0x2f9be4c));
              if (iVar11 == 0) {
                func_0x014388e4();
              }
              uVar3 = *(undefined4 *)(iVar11 + 8);
              if (iVar12 == 0) {
                func_0x014388e4();
              }
              iVar11 = func_0x04cd2d7c(iVar12,uVar3,**(undefined4 **)(_UNK_02f9c2c4 + 0x2f9be88));
              if (iVar11 == 0) {
                iVar12 = *(int *)(iVar4 + 100);
                iVar11 = func_0x04cfd760(iVar5,iVar6,**(undefined4 **)(_UNK_02f9c2c8 + 0x2f9bea8));
                if (iVar11 == 0) {
                  func_0x014388e4();
                }
                uVar3 = *(undefined4 *)(iVar11 + 8);
                if (iVar12 == 0) {
                  func_0x014388e4();
                }
                iVar11 = func_0x04cd2d7c(iVar12,uVar3,**(undefined4 **)(_UNK_02f9c2cc + 0x2f9bee4));
                if (iVar11 == 0) {
                  iVar11 = func_0x04cfd760(iVar5,iVar6,**(undefined4 **)(_UNK_02f9c2d0 + 0x2f9bf04))
                  ;
                  if (iVar11 == 0) {
                    func_0x014388e4();
                  }
                  if (0 < *(int *)(iVar11 + 0xc)) {
                    uVar3 = func_0x04cfd760(iVar5,iVar6,**(undefined4 **)(_UNK_02f9c2d4 + 0x2f9bf3c)
                                           );
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar11 = *(int *)(iVar1 + 8);
                    uVar13 = *(uint *)(iVar1 + 0xc);
                    piVar9 = *(int **)(_UNK_02f9c2d8 + 0x2f9bf7c);
                    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
                    iVar12 = *piVar9;
                    if (iVar11 == 0) {
                      func_0x014388e4();
                    }
                    if (uVar13 < *(uint *)(iVar11 + 0xc)) {
                      *(uint *)(iVar1 + 0xc) = uVar13 + 1;
                      puVar8 = (undefined4 *)(iVar11 + uVar13 * 4 + 0x10);
                      *puVar8 = uVar3;
                      func_0x014385cc(puVar8,uVar3);
                    }
                    else {
                      func_0x04cfda38(iVar1,uVar3,
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
                    }
                    bVar14 = true;
                  }
                }
              }
              iVar6 = iVar6 + 1;
            }
            iVar5 = *(int *)(iVar4 + 0x6c);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            FUN_026f040c(iVar5,1,0);
          }
          if (bVar14) {
            FUN_026ef7d8(iVar4,1,0);
          }
          else {
            iVar4 = *(int *)(iVar4 + 0x14);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            func_0x03b70d24(iVar4,**(undefined4 **)(_UNK_02f9c2dc + 0x2f9c048));
          }
        }
        uStack_70 = uStack_70 - 1;
      } while (uStack_70 < 0x80000000);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x14e3,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x028a054c(iVar1,0);
  }
  return iVar1;
}

