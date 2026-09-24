
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_018fe278(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  bool bVar12;
  int iVar13;
  undefined4 *puVar14;
  uint uStack_6c;
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
  
  pcVar7 = (char *)(_UNK_018fed44 + 0x18fe28c);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018fed48 + 0x18fe2a0));
    func_0x01438628(*(undefined4 *)(_UNK_018fed4c + 0x18fe2ac));
    func_0x01438628(*(undefined4 *)(_UNK_018fed50 + 0x18fe2b8));
    func_0x01438628(*(undefined4 *)(_UNK_018fed54 + 0x18fe2c4));
    func_0x01438628(*(undefined4 *)(_UNK_018fed58 + 0x18fe2d0));
    func_0x01438628(*(undefined4 *)(_UNK_018fed5c + 0x18fe2dc));
    func_0x01438628(*(undefined4 *)(_UNK_018fed60 + 0x18fe2e8));
    func_0x01438628(*(undefined4 *)(_UNK_018fed64 + 0x18fe2f4));
    func_0x01438628(*(undefined4 *)(_UNK_018fed68 + 0x18fe300));
    func_0x01438628(*(undefined4 *)(_UNK_018fed6c + 0x18fe30c));
    func_0x01438628(*(undefined4 *)(_UNK_018fed70 + 0x18fe318));
    func_0x01438628(*(undefined4 *)(_UNK_018fed74 + 0x18fe324));
    func_0x01438628(*(undefined4 *)(_UNK_018fed78 + 0x18fe330));
    func_0x01438628(*(undefined4 *)(_UNK_018fed7c + 0x18fe33c));
    func_0x01438628(*(undefined4 *)(_UNK_018fed80 + 0x18fe348));
    func_0x01438628(*(undefined4 *)(_UNK_018fed84 + 0x18fe354));
    func_0x01438628(*(undefined4 *)(_UNK_018fed88 + 0x18fe360));
    func_0x01438628(*(undefined4 *)(_UNK_018fed8c + 0x18fe36c));
    func_0x01438628(*(undefined4 *)(_UNK_018fed90 + 0x18fe378));
    func_0x01438628(*(undefined4 *)(_UNK_018fed94 + 0x18fe384));
    func_0x01438628(*(undefined4 *)(_UNK_018fed98 + 0x18fe390));
    func_0x01438628(*(undefined4 *)(_UNK_018fed9c + 0x18fe39c));
    func_0x01438628(*(undefined4 *)(_UNK_018feda0 + 0x18fe3a8));
    func_0x01438628(*(undefined4 *)(_UNK_018feda4 + 0x18fe3b4));
    func_0x01438628(*(undefined4 *)(_UNK_018feda8 + 0x18fe3c0));
    func_0x01438628(*(undefined4 *)(_UNK_018fedac + 0x18fe3cc));
    func_0x01438628(*(undefined4 *)(_UNK_018fedb0 + 0x18fe3d8));
    func_0x01438628(*(undefined4 *)(_UNK_018fedb4 + 0x18fe3e4));
    func_0x01438628(*(undefined4 *)(_UNK_018fedb8 + 0x18fe3f0));
    func_0x01438628(*(undefined4 *)(_UNK_018fedbc + 0x18fe3fc));
    func_0x01438628(*(undefined4 *)(_UNK_018fedc0 + 0x18fe408));
    func_0x01438628(*(undefined4 *)(_UNK_018fedc4 + 0x18fe414));
    func_0x01438628(*(undefined4 *)(_UNK_018fedc8 + 0x18fe420));
    func_0x01438628(*(undefined4 *)(_UNK_018fedcc + 0x18fe42c));
    func_0x01438628(*(undefined4 *)(_UNK_018fedd0 + 0x18fe438));
    func_0x01438628(*(undefined4 *)(_UNK_018fedd4 + 0x18fe444));
    *pcVar7 = '\x01';
  }
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  iVar1 = func_0x02953fd4(0x13f5,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_018fedd8 + 0x18fe4c0));
    func_0x024eed9c(iVar1,**(undefined4 **)(_UNK_018feddc + 0x18fe4d4));
    iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_018fede0 + 0x18fe4e8));
    func_0x024f0510(iVar2,**(undefined4 **)(_UNK_018fede4 + 0x18fe4fc));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar9 = *(int *)(iVar2 + 8);
    uVar11 = *(uint *)(iVar2 + 0xc);
    piVar8 = *(int **)(_UNK_018fede8 + 0x18fe530);
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
    iVar13 = *piVar8;
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    if (uVar11 < *(uint *)(iVar9 + 0xc)) {
      *(uint *)(iVar2 + 0xc) = uVar11 + 1;
      *(undefined4 *)(iVar9 + uVar11 * 4 + 0x10) = 0x2711;
    }
    else {
      func_0x024f0520(iVar2,0x2711,*(undefined4 *)(*(int *)(*(int *)(iVar13 + 0x10) + 0x60) + 0x38))
      ;
    }
    iVar9 = *(int *)(iVar2 + 8);
    uVar11 = *(uint *)(iVar2 + 0xc);
    iVar13 = *piVar8;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    if (uVar11 < *(uint *)(iVar9 + 0xc)) {
      *(uint *)(iVar2 + 0xc) = uVar11 + 1;
      *(undefined4 *)(iVar9 + uVar11 * 4 + 0x10) = 0x2775;
    }
    else {
      func_0x024f0520(iVar2,0x2775,*(undefined4 *)(*(int *)(*(int *)(iVar13 + 0x10) + 0x60) + 0x38))
      ;
    }
    iVar9 = *(int *)(iVar2 + 8);
    uVar11 = *(uint *)(iVar2 + 0xc);
    iVar13 = *piVar8;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    if (uVar11 < *(uint *)(iVar9 + 0xc)) {
      *(uint *)(iVar2 + 0xc) = uVar11 + 1;
      *(undefined4 *)(iVar9 + uVar11 * 4 + 0x10) = 0x27d9;
    }
    else {
      func_0x024f0520(iVar2,0x27d9,*(undefined4 *)(*(int *)(*(int *)(iVar13 + 0x10) + 0x60) + 0x38))
      ;
    }
    iVar13 = *(int *)(iVar2 + 8);
    uVar11 = *(uint *)(iVar2 + 0xc);
    iVar9 = *piVar8;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
    if (iVar13 == 0) {
      func_0x014388e4();
    }
    if (uVar11 < *(uint *)(iVar13 + 0xc)) {
      *(uint *)(iVar2 + 0xc) = uVar11 + 1;
      *(undefined4 *)(iVar13 + uVar11 * 4 + 0x10) = 0x283d;
    }
    else {
      func_0x024f0520(iVar2,0x283d,*(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
    }
    if (*(int *)(**(int **)(_UNK_018fedec + 0x18fe6a8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar9 = func_0x014e9518(**(undefined4 **)(_UNK_018fedf0 + 0x18fe6c4));
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    iVar9 = func_0x036c7bec(iVar9,**(undefined4 **)(_UNK_018fedf4 + 0x18fe6e4));
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    iVar9 = *(int *)(iVar9 + 0x2b4);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    uVar3 = func_0x024ef08c(iVar9,**(undefined4 **)(_UNK_018fedf8 + 0x18fe718));
    iVar9 = func_0x014388d4(**(undefined4 **)(_UNK_018fedfc + 0x18fe730));
    func_0x024f108c(iVar9,uVar3,**(undefined4 **)(_UNK_018fee00 + 0x18fe748));
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    uStack_6c = *(int *)(iVar9 + 0xc) - 1;
    if (-1 < (int)uStack_6c) {
      puVar14 = *(undefined4 **)(_UNK_018fee04 + 0x18fe78c);
      do {
        if (*(int *)(**(int **)(_UNK_018fee08 + 0x18fe794) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar13 = func_0x014e9518(**(undefined4 **)(_UNK_018fee0c + 0x18fe7b0));
        if (iVar13 == 0) {
          func_0x014388e4();
        }
        iVar13 = func_0x036c7bec(iVar13,**(undefined4 **)(_UNK_018fee10 + 0x18fe7d0));
        if (iVar13 == 0) {
          func_0x014388e4();
        }
        iVar13 = *(int *)(iVar13 + 0x2b4);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        uVar3 = func_0x0152983c(iVar9,uStack_6c,**(undefined4 **)(_UNK_018fee14 + 0x18fe80c));
        if (iVar13 == 0) {
          func_0x014388e4();
        }
        iVar13 = func_0x024f04d4(iVar13,uVar3,**(undefined4 **)(_UNK_018fee18 + 0x18fe834));
        if (*(int *)(**(int **)(_UNK_018fee1c + 0x18fe84c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = FUN_018fddac(iVar13);
        if (iVar4 != 0) {
          if (iVar13 == 0) {
            func_0x014388e4();
          }
          iVar4 = *(int *)(iVar13 + 0x10);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          func_0x024ef7ac(&uStack_68,iVar4,**(undefined4 **)(_UNK_018fee20 + 0x18fe89c));
          uStack_38 = uStack_68;
          uStack_34 = uStack_64;
          uStack_30 = uStack_60;
          uStack_2c = uStack_5c;
          while (iVar4 = func_0x015101bc(&uStack_38,**(undefined4 **)(_UNK_018fee24 + 0x18fe8b8)),
                uVar3 = uStack_2c, iVar4 != 0) {
            if (*(int *)(**(int **)(_UNK_018fee28 + 0x18fe8d4) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_018fee2c + 0x18fe8f4));
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            iVar4 = func_0x029a6fa8(iVar4,uVar3,0);
            if (iVar4 != 0) {
              uVar10 = *(undefined4 *)(iVar4 + 0x30);
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              iVar4 = func_0x024f0f34(iVar2,uVar10,**(undefined4 **)(_UNK_018fee30 + 0x18fe93c));
              if (iVar4 != 0) {
                if (iVar13 == 0) {
                  func_0x014388e4();
                }
                iVar4 = *(int *)(iVar13 + 0x14);
                if (iVar4 == 0) {
                  func_0x014388e4();
                }
                iVar4 = func_0x024f0540(iVar4,uVar3,**(undefined4 **)(_UNK_018fee34 + 0x18fe978));
                if (iVar4 == 0) {
                  iVar4 = *(int *)(iVar13 + 0x14);
                  if (iVar4 == 0) {
                    func_0x014388e4();
                  }
                  func_0x024f10d0(iVar4,uVar3,0,**(undefined4 **)(_UNK_018fee38 + 0x18fe9a8));
                }
                iVar4 = *(int *)(iVar13 + 0x14);
                if (iVar4 == 0) {
                  func_0x014388e4();
                }
                iVar5 = func_0x024f05d4(iVar4,uVar3,**(undefined4 **)(_UNK_018fee3c + 0x18fe9d4));
                if (iVar4 == 0) {
                  func_0x014388e4();
                }
                func_0x024f10d4(iVar4,uVar3,iVar5 + 1,**(undefined4 **)(_UNK_018fee40 + 0x18fe9fc));
              }
            }
          }
          func_0x024ef7bc(&uStack_38,**(undefined4 **)(_UNK_018fee50 + 0x18fea1c));
          if (iVar13 == 0) {
            func_0x014388e4();
          }
          iVar4 = *(int *)(iVar13 + 0x10);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          func_0x024f04c8(iVar4,**(undefined4 **)(_UNK_018fee48 + 0x18fea4c));
          iVar4 = *(int *)(iVar13 + 0x14);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          func_0x024f0ed8(&uStack_68,iVar4,**(undefined4 **)(_UNK_018fee4c + 0x18fea78));
          bVar12 = false;
          uStack_50 = uStack_68;
          uStack_4c = uStack_64;
          uStack_48 = uStack_60;
          uStack_44 = uStack_5c;
          uStack_40 = uStack_58;
          while (iVar4 = func_0x015144ec(&uStack_50,*puVar14), uVar3 = uStack_44, iVar4 != 0) {
            iVar4 = (int)uStack_40;
            if (0 < (int)uStack_40) {
              uVar10 = func_0x014388d4(**(undefined4 **)(_UNK_018fee58 + 0x18feac8));
              func_0x02ca3c70(uVar10,uVar3,iVar4,0,0);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar4 = *(int *)(iVar1 + 8);
              uVar11 = *(uint *)(iVar1 + 0xc);
              piVar8 = *(int **)(_UNK_018fee5c + 0x18feb20);
              *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
              iVar5 = *piVar8;
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              if (uVar11 < *(uint *)(iVar4 + 0xc)) {
                *(uint *)(iVar1 + 0xc) = uVar11 + 1;
                bVar12 = true;
                puVar6 = (undefined4 *)(iVar4 + uVar11 * 4 + 0x10);
                *puVar6 = uVar10;
                func_0x014385cc(puVar6,uVar10);
              }
              else {
                bVar12 = true;
                func_0x0152874c(iVar1,uVar10,
                                *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x38));
              }
            }
          }
          func_0x024f0ee8(&uStack_50,**(undefined4 **)(_UNK_018fee60 + 0x18feb88));
          if (iVar13 == 0) {
            func_0x014388e4();
          }
          if (bVar12) {
            func_0x026ee768(iVar13,1,0);
          }
          else {
            iVar13 = *(int *)(iVar13 + 0x14);
            if (iVar13 == 0) {
              func_0x014388e4();
            }
            func_0x024f0570(iVar13,**(undefined4 **)(_UNK_018fee6c + 0x18febdc));
          }
        }
        uStack_6c = uStack_6c - 1;
      } while (uStack_6c < 0x80000000);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x13f5,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x028a054c(iVar1,0);
  }
  return iVar1;
}

