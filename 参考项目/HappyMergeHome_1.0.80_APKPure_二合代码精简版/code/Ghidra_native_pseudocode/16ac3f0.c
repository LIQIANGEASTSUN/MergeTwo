
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_016bc3f0(void)

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
  bool bVar15;
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
  
  pcVar10 = (char *)(_UNK_016bcf14 + 0x16bc404);
  if (*pcVar10 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016bcf18 + 0x16bc418));
    func_0x01438628(*(undefined4 *)(_UNK_016bcf1c + 0x16bc424));
    func_0x01438628(*(undefined4 *)(_UNK_016bcf20 + 0x16bc430));
    func_0x01438628(*(undefined4 *)(_UNK_016bcf24 + 0x16bc43c));
    func_0x01438628(*(undefined4 *)(_UNK_016bcf28 + 0x16bc448));
    func_0x01438628(*(undefined4 *)(_UNK_016bcf2c + 0x16bc454));
    func_0x01438628(*(undefined4 *)(_UNK_016bcf30 + 0x16bc460));
    func_0x01438628(*(undefined4 *)(_UNK_016bcf34 + 0x16bc46c));
    func_0x01438628(*(undefined4 *)(_UNK_016bcf38 + 0x16bc478));
    func_0x01438628(*(undefined4 *)(_UNK_016bcf3c + 0x16bc484));
    func_0x01438628(*(undefined4 *)(_UNK_016bcf40 + 0x16bc490));
    func_0x01438628(*(undefined4 *)(_UNK_016bcf44 + 0x16bc49c));
    func_0x01438628(*(undefined4 *)(_UNK_016bcf48 + 0x16bc4a8));
    func_0x01438628(*(undefined4 *)(_UNK_016bcf4c + 0x16bc4b4));
    func_0x01438628(*(undefined4 *)(_UNK_016bcf50 + 0x16bc4c0));
    func_0x01438628(*(undefined4 *)(_UNK_016bcf54 + 0x16bc4cc));
    func_0x01438628(*(undefined4 *)(_UNK_016bcf58 + 0x16bc4d8));
    func_0x01438628(*(undefined4 *)(_UNK_016bcf5c + 0x16bc4e4));
    func_0x01438628(*(undefined4 *)(_UNK_016bcf60 + 0x16bc4f0));
    func_0x01438628(*(undefined4 *)(_UNK_016bcf64 + 0x16bc4fc));
    func_0x01438628(*(undefined4 *)(_UNK_016bcf68 + 0x16bc508));
    func_0x01438628(*(undefined4 *)(_UNK_016bcf6c + 0x16bc514));
    func_0x01438628(*(undefined4 *)(_UNK_016bcf70 + 0x16bc520));
    func_0x01438628(*(undefined4 *)(_UNK_016bcf74 + 0x16bc52c));
    func_0x01438628(*(undefined4 *)(_UNK_016bcf78 + 0x16bc538));
    func_0x01438628(*(undefined4 *)(_UNK_016bcf7c + 0x16bc544));
    func_0x01438628(*(undefined4 *)(_UNK_016bcf80 + 0x16bc550));
    func_0x01438628(*(undefined4 *)(_UNK_016bcf84 + 0x16bc55c));
    func_0x01438628(*(undefined4 *)(_UNK_016bcf88 + 0x16bc568));
    func_0x01438628(*(undefined4 *)(_UNK_016bcf8c + 0x16bc574));
    func_0x01438628(*(undefined4 *)(_UNK_016bcf90 + 0x16bc580));
    func_0x01438628(*(undefined4 *)(_UNK_016bcf94 + 0x16bc58c));
    func_0x01438628(*(undefined4 *)(_UNK_016bcf98 + 0x16bc598));
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
  iVar1 = func_0x02953fd4(0x182e,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_016bcf9c + 0x16bc614));
    func_0x024eed9c(iVar1,**(undefined4 **)(_UNK_016bcfa0 + 0x16bc624));
    if (*(int *)(**(int **)(_UNK_016bcfa4 + 0x16bc638) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_016bcfa8 + 0x16bc654));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024f04cc(iVar2,**(undefined4 **)(_UNK_016bcfac + 0x16bc674));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0x35c);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar3 = func_0x024ef08c(iVar2,**(undefined4 **)(_UNK_016bcfb0 + 0x16bc6a8));
    iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_016bcfb4 + 0x16bc6c0));
    func_0x024f108c(iVar2,uVar3,**(undefined4 **)(_UNK_016bcfb8 + 0x16bc6d8));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_6c = *(int *)(iVar2 + 0xc) - 1;
    if (-1 < (int)uStack_6c) {
      do {
        if (*(int *)(**(int **)(_UNK_016bcfbc + 0x16bc714) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_016bcfc0 + 0x16bc730));
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = func_0x024f04cc(iVar4,**(undefined4 **)(_UNK_016bcfc4 + 0x16bc750));
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = *(int *)(iVar4 + 0x35c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar3 = func_0x0152983c(iVar2,uStack_6c,**(undefined4 **)(_UNK_016bcfc8 + 0x16bc78c));
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = func_0x024f04d4(iVar4,uVar3,**(undefined4 **)(_UNK_016bcfcc + 0x16bc7b4));
        if (*(int *)(**(int **)(_UNK_016bcfd0 + 0x16bc7cc) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar5 = FUN_016bbf24(iVar4);
        if (iVar5 != 0) {
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          iVar5 = *(int *)(iVar4 + 0x10);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          func_0x024ef7ac(&uStack_68,iVar5,**(undefined4 **)(_UNK_016bcfd4 + 0x16bc81c));
          uStack_38 = uStack_68;
          uStack_34 = uStack_64;
          uStack_30 = uStack_60;
          uStack_2c = uStack_5c;
          while (iVar5 = func_0x015101bc(&uStack_38,**(undefined4 **)(_UNK_016bcfd8 + 0x16bc838)),
                uVar3 = uStack_2c, iVar5 != 0) {
            iVar5 = *(int *)(iVar4 + 0x48);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x024f0f34(iVar5,uVar3,**(undefined4 **)(_UNK_016bcfdc + 0x16bc868));
            if (iVar5 == 0) {
              iVar5 = *(int *)(iVar4 + 0x14);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              iVar5 = func_0x024f0540(iVar5,uVar3,**(undefined4 **)(_UNK_016bcfe0 + 0x16bc898));
              if (iVar5 == 0) {
                iVar5 = *(int *)(iVar4 + 0x14);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                func_0x024f10d0(iVar5,uVar3,0,**(undefined4 **)(_UNK_016bcfe4 + 0x16bc8c8));
              }
              iVar5 = *(int *)(iVar4 + 0x14);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              iVar6 = func_0x024f05d4(iVar5,uVar3,**(undefined4 **)(_UNK_016bcfe8 + 0x16bc8f4));
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              func_0x024f10d4(iVar5,uVar3,iVar6 + 1,**(undefined4 **)(_UNK_016bcfec + 0x16bc91c));
            }
          }
          func_0x024ef7bc(&uStack_38,**(undefined4 **)(_UNK_016bcffc + 0x16bc93c));
          iVar5 = *(int *)(iVar4 + 0x10);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          func_0x024f04c8(iVar5,**(undefined4 **)(_UNK_016bcff4 + 0x16bc964));
          iVar5 = *(int *)(iVar4 + 0x14);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          func_0x024f0ed8(&uStack_68,iVar5,**(undefined4 **)(_UNK_016bcff8 + 0x16bc990));
          bVar14 = false;
          uStack_50 = uStack_68;
          uStack_4c = uStack_64;
          uStack_48 = uStack_60;
          uStack_44 = uStack_5c;
          uStack_40 = uStack_58;
          while (iVar5 = func_0x015144ec(&uStack_50,**(undefined4 **)(_UNK_016bd014 + 0x16bc9bc)),
                uVar3 = uStack_44, iVar5 != 0) {
            iVar6 = *(int *)(iVar4 + 0x48);
            iVar5 = (int)uStack_40;
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar6 = func_0x024f0f34(iVar6,uVar3,**(undefined4 **)(_UNK_016bd004 + 0x16bc9ec));
            if (iVar6 == 0) {
              iVar6 = *(int *)(iVar4 + 100);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              iVar6 = func_0x024f0f34(iVar6,uVar3,**(undefined4 **)(_UNK_016bd008 + 0x16bca1c));
              if (0 < iVar5 && iVar6 == 0) {
                uVar7 = func_0x014388d4(**(undefined4 **)(_UNK_016bd00c + 0x16bca48));
                func_0x02ca3c70(uVar7,uVar3,iVar5,0,0);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                iVar5 = *(int *)(iVar1 + 8);
                uVar13 = *(uint *)(iVar1 + 0xc);
                piVar9 = *(int **)(_UNK_016bd010 + 0x16bca98);
                *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
                iVar6 = *piVar9;
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                if (uVar13 < *(uint *)(iVar5 + 0xc)) {
                  *(uint *)(iVar1 + 0xc) = uVar13 + 1;
                  bVar14 = true;
                  puVar8 = (undefined4 *)(iVar5 + uVar13 * 4 + 0x10);
                  *puVar8 = uVar7;
                  func_0x014385cc(puVar8,uVar7);
                }
                else {
                  bVar14 = true;
                  func_0x0152874c(iVar1,uVar7,
                                  *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38));
                }
              }
            }
          }
          func_0x024f0ee8(&uStack_50,**(undefined4 **)(_UNK_016bd018 + 0x16bcafc));
          if (*(int *)(**(int **)(_UNK_016bd020 + 0x16bcb10) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar5 = FUN_016af738();
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          uVar3 = func_0x0152983c(iVar2,uStack_6c,**(undefined4 **)(_UNK_016bd024 + 0x16bcb48));
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = func_0x016bd04c(iVar5,uVar3);
          if (iVar5 != 0) {
            iVar6 = 0;
            bVar15 = false;
            while( true ) {
              iVar11 = *(int *)(iVar5 + 0xc);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              if (iVar11 <= iVar6) break;
              iVar12 = *(int *)(iVar4 + 0x48);
              iVar11 = func_0x0152983c(iVar5,iVar6,**(undefined4 **)(_UNK_016bd02c + 0x16bcbac));
              if (iVar11 == 0) {
                func_0x014388e4();
              }
              uVar3 = *(undefined4 *)(iVar11 + 8);
              if (iVar12 == 0) {
                func_0x014388e4();
              }
              iVar11 = func_0x024f0f34(iVar12,uVar3,**(undefined4 **)(_UNK_016bd030 + 0x16bcbe8));
              if (iVar11 == 0) {
                iVar12 = *(int *)(iVar4 + 100);
                iVar11 = func_0x0152983c(iVar5,iVar6,**(undefined4 **)(_UNK_016bd034 + 0x16bcc08));
                if (iVar11 == 0) {
                  func_0x014388e4();
                }
                uVar3 = *(undefined4 *)(iVar11 + 8);
                if (iVar12 == 0) {
                  func_0x014388e4();
                }
                iVar11 = func_0x024f0f34(iVar12,uVar3,**(undefined4 **)(_UNK_016bd038 + 0x16bcc44));
                if (iVar11 == 0) {
                  iVar11 = func_0x0152983c(iVar5,iVar6,**(undefined4 **)(_UNK_016bd03c + 0x16bcc64))
                  ;
                  if (iVar11 == 0) {
                    func_0x014388e4();
                  }
                  if (0 < *(int *)(iVar11 + 0xc)) {
                    uVar3 = func_0x0152983c(iVar5,iVar6,**(undefined4 **)(_UNK_016bd040 + 0x16bcc98)
                                           );
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar11 = *(int *)(iVar1 + 8);
                    uVar13 = *(uint *)(iVar1 + 0xc);
                    piVar9 = *(int **)(_UNK_016bd044 + 0x16bccd4);
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
                      func_0x0152874c(iVar1,uVar3,
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
                    }
                    bVar15 = true;
                  }
                }
              }
              iVar6 = iVar6 + 1;
            }
            iVar5 = *(int *)(iVar4 + 0x6c);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x026ec720(iVar5,1,0);
            if (bVar15) {
              func_0x026cf058(iVar4,1,0);
            }
          }
          if (bVar14) {
            func_0x026cf058(iVar4,1,0);
          }
          else {
            iVar4 = *(int *)(iVar4 + 0x14);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            func_0x024f0570(iVar4,**(undefined4 **)(_UNK_016bd048 + 0x16bcdb4));
          }
        }
        uStack_6c = uStack_6c - 1;
      } while (uStack_6c < 0x80000000);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x182e,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x028a054c(iVar1,0);
  }
  return iVar1;
}

