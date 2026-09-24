
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02ba621c(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  undefined4 uStack_48;
  float fStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar7 = (char *)(_UNK_02ba6744 + 0x2ba6234);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02ba6748 + 0x2ba6248));
    func_0x01438628(*(undefined4 *)(_UNK_02ba674c + 0x2ba6254));
    func_0x01438628(*(undefined4 *)(_UNK_02ba6750 + 0x2ba6260));
    func_0x01438628(*(undefined4 *)(_UNK_02ba6754 + 0x2ba626c));
    func_0x01438628(*(undefined4 *)(_UNK_02ba6758 + 0x2ba6278));
    func_0x01438628(*(undefined4 *)(_UNK_02ba675c + 0x2ba6284));
    func_0x01438628(*(undefined4 *)(_UNK_02ba6760 + 0x2ba6290));
    func_0x01438628(*(undefined4 *)(_UNK_02ba6764 + 0x2ba629c));
    func_0x01438628(*(undefined4 *)(_UNK_02ba6768 + 0x2ba62a8));
    func_0x01438628(*(undefined4 *)(_UNK_02ba676c + 0x2ba62b4));
    func_0x01438628(*(undefined4 *)(_UNK_02ba6770 + 0x2ba62c0));
    func_0x01438628(*(undefined4 *)(_UNK_02ba6774 + 0x2ba62cc));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xaa0,0);
  if (iVar1 == 0) {
    iVar1 = func_0x030b119c(0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x030b1260(iVar1,0);
    if (iVar1 != 0) {
      piVar11 = *(int **)(_UNK_02ba6778 + 0x2ba6354);
      iVar1 = **(int **)(*piVar11 + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x02b63a9c(iVar1,0x1c4,0,0);
      if (iVar1 == 0) {
        iVar1 = **(int **)(*piVar11 + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x02b67784(iVar1,0);
        if (iVar1 == 0) {
          iVar1 = func_0x030b119c(0);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x030b1518(iVar1,0);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uVar8 = *(undefined4 *)(iVar1 + 0x24);
          if (*(int *)(**(int **)(_UNK_02ba677c + 0x2ba63f0) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x030b15f8(uVar8,0);
          if (iVar1 != 0) {
            if (*(int *)(**(int **)(_UNK_02ba6780 + 0x2ba6424) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02ba6784 + 0x2ba6440));
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = func_0x03579aec(iVar1,**(undefined4 **)(_UNK_02ba678c + 0x2ba646c),
                                    **(undefined4 **)(_UNK_02ba6788 + 0x2ba6460));
            iVar6 = func_0x014388d4(**(undefined4 **)(_UNK_02ba6790 + 0x2ba6484));
            func_0x024eed9c(iVar6,**(undefined4 **)(_UNK_02ba6794 + 0x2ba6498));
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar8 = func_0x024eecb8(iVar1,0);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar5 = *(int *)(iVar6 + 8);
            uVar9 = *(uint *)(iVar6 + 0xc);
            piVar3 = *(int **)(_UNK_02ba6798 + 0x2ba64e8);
            *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
            iVar12 = *piVar3;
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            if (uVar9 < *(uint *)(iVar5 + 0xc)) {
              *(uint *)(iVar6 + 0xc) = uVar9 + 1;
              puVar2 = (undefined4 *)(iVar5 + uVar9 * 4 + 0x10);
              *puVar2 = uVar8;
              func_0x014385cc(puVar2,uVar8);
            }
            else {
              func_0x0152874c(iVar6,uVar8,
                              *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
            }
            iVar5 = **(int **)(*piVar11 + 0x5c);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            piVar3 = (int *)func_0x024eecb8(iVar1,0);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            piVar10 = (int *)0x0;
            if ((piVar3 != (int *)0x0) &&
               (piVar10 = piVar3, *piVar3 != **(int **)(_UNK_02ba679c + 0x2ba6580))) {
              piVar10 = (int *)0x0;
            }
            uStack_3c = 1;
            uStack_34 = 0;
            uStack_40 = 0;
            iStack_38 = iVar6;
            func_0x02b647b4(iVar5,0x1c4,piVar10,0);
            iVar6 = **(int **)(*piVar11 + 0x5c);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            uStack_40 = 0;
            iVar6 = func_0x02b6127c(iVar6,0x1c4,0,0);
            if (iVar6 != 0) {
              iVar6 = **(int **)(*piVar11 + 0x5c);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              func_0x02b678f4(iVar6,0x2db,0);
              piVar11 = *(int **)(_UNK_02ba67a0 + 0x2ba6620);
              piVar3 = *(int **)(_UNK_02ba67a4 + 0x2ba662c);
              uVar8 = **(undefined4 **)(*piVar11 + 0x5c);
              if (*(int *)(*piVar3 + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar6 = func_0x024ef144(uVar8,0,0);
              if (iVar6 != 0) {
                iVar6 = **(int **)(*piVar11 + 0x5c);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                uVar8 = func_0x02d06f88(iVar6,0);
                if (*(int *)(*piVar3 + 0x74) == 0) {
                  func_0x014387a4();
                }
                iVar6 = func_0x024ef144(uVar8,0,0);
                if (iVar6 != 0) {
                  iVar6 = **(int **)(*piVar11 + 0x5c);
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  uVar8 = func_0x02d06f88(iVar6,0);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = func_0x024eecb8(iVar1,0);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  func_0x024f0474(&fStack_2c,iVar1,0);
                  uStack_40 = 0;
                  func_0x0157e8ec(uVar8,_UNK_02ba6740 - fStack_2c,0,0);
                }
              }
            }
          }
        }
      }
    }
    return;
  }
  iVar1 = func_0x029540a4(0xaa0,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  fStack_2c = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  func_0x024f56c0(&uStack_48,0,0);
  uStack_30 = uStack_48;
  fStack_2c = fStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&uStack_30,param_1,0);
  iVar6 = *(int *)(iVar1 + 8);
  uVar8 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  uVar4 = 2;
  if (iVar1 == 0) {
    uVar4 = 1;
  }
  func_0x024f56d0(iVar6,uVar8,&uStack_30,uVar4,0,0);
  return;
}

