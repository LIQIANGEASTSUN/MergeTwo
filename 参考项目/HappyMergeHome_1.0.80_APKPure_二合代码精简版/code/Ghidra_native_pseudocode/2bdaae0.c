
/* WARNING: Possible PIC construction at 0x02beac90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02bead1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02beada8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02beae34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02beaec0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02beaf4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02beafd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02beb064: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02beafdc) */
/* WARNING: Removing unreachable block (ram,0x02beaf50) */
/* WARNING: Removing unreachable block (ram,0x02beaec4) */
/* WARNING: Removing unreachable block (ram,0x02beae38) */
/* WARNING: Removing unreachable block (ram,0x02beadac) */
/* WARNING: Removing unreachable block (ram,0x02bead20) */
/* WARNING: Removing unreachable block (ram,0x02beac94) */
/* WARNING: Removing unreachable block (ram,0x02beb068) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02beaae0(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  int iVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar7 = (char *)(_UNK_02beb09c + 0x2beaaf8);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02beb0a0 + 0x2beab0c));
    func_0x01438628(*(undefined4 *)(_UNK_02beb0a4 + 0x2beab18));
    func_0x01438628(*(undefined4 *)(_UNK_02beb0a8 + 0x2beab24));
    func_0x01438628(*(undefined4 *)(_UNK_02beb0ac + 0x2beab30));
    func_0x01438628(*(undefined4 *)(_UNK_02beb0b0 + 0x2beab3c));
    func_0x01438628(*(undefined4 *)(_UNK_02beb0b4 + 0x2beab48));
    func_0x01438628(*(undefined4 *)(_UNK_02beb0b8 + 0x2beab54));
    func_0x01438628(*(undefined4 *)(_UNK_02beb0bc + 0x2beab60));
    func_0x01438628(*(undefined4 *)(_UNK_02beb0c0 + 0x2beab6c));
    func_0x01438628(*(undefined4 *)(_UNK_02beb0c4 + 0x2beab78));
    func_0x01438628(*(undefined4 *)(_UNK_02beb0c8 + 0x2beab84));
    func_0x01438628(*(undefined4 *)(_UNK_02beb0cc + 0x2beab90));
    *pcVar7 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x5ed3,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x5ed3,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar3 + 8);
    uVar8 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar3 == 0) {
      uVar4 = 1;
    }
    func_0x024f56d0(iVar6,uVar8,&uStack_30,uVar4,0,0);
    return;
  }
  iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_02beb0d0 + 0x2beabec));
  func_0x024eed9c(iVar3,**(undefined4 **)(_UNK_02beb0d4 + 0x2beac00));
  puVar10 = *(undefined4 **)(_UNK_02beb0d8 + 0x2beac14);
  iVar6 = func_0x014388d4(*puVar10);
  func_0x04a59120(iVar6,param_1,**(undefined4 **)(_UNK_02beb0dc + 0x2beac30),0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar9 = *(int *)(iVar3 + 8);
  uVar5 = *(uint *)(iVar3 + 0xc);
  piVar11 = *(int **)(_UNK_02beb0e0 + 0x2beac64);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  iVar12 = *piVar11;
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  if (uVar5 < *(uint *)(iVar9 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar5 + 1;
    piVar11 = (int *)(iVar9 + uVar5 * 4 + 0x10);
    *piVar11 = iVar6;
  }
  else {
    func_0x0152874c(iVar3,iVar6,*(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
    iVar6 = func_0x014388d4(*puVar10);
    func_0x04a59120(iVar6,param_1,**(undefined4 **)(_UNK_02beb0e4 + 0x2beacd0),0);
    iVar9 = *(int *)(iVar3 + 8);
    uVar5 = *(uint *)(iVar3 + 0xc);
    iVar12 = *piVar11;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    if (uVar5 < *(uint *)(iVar9 + 0xc)) {
      *(uint *)(iVar3 + 0xc) = uVar5 + 1;
      piVar11 = (int *)(iVar9 + uVar5 * 4 + 0x10);
      *piVar11 = iVar6;
    }
    else {
      func_0x0152874c(iVar3,iVar6,*(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
      iVar6 = func_0x014388d4(*puVar10);
      func_0x04a59120(iVar6,param_1,**(undefined4 **)(_UNK_02beb0e8 + 0x2bead5c),0);
      iVar9 = *(int *)(iVar3 + 8);
      uVar5 = *(uint *)(iVar3 + 0xc);
      iVar12 = *piVar11;
      *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      if (uVar5 < *(uint *)(iVar9 + 0xc)) {
        *(uint *)(iVar3 + 0xc) = uVar5 + 1;
        piVar11 = (int *)(iVar9 + uVar5 * 4 + 0x10);
        *piVar11 = iVar6;
      }
      else {
        func_0x0152874c(iVar3,iVar6,*(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38)
                       );
        iVar6 = func_0x014388d4(*puVar10);
        func_0x04a59120(iVar6,param_1,**(undefined4 **)(_UNK_02beb0ec + 0x2beade8),0);
        iVar9 = *(int *)(iVar3 + 8);
        uVar5 = *(uint *)(iVar3 + 0xc);
        iVar12 = *piVar11;
        *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        if (uVar5 < *(uint *)(iVar9 + 0xc)) {
          *(uint *)(iVar3 + 0xc) = uVar5 + 1;
          piVar11 = (int *)(iVar9 + uVar5 * 4 + 0x10);
          *piVar11 = iVar6;
        }
        else {
          func_0x0152874c(iVar3,iVar6,
                          *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
          iVar6 = func_0x014388d4(*puVar10);
          func_0x04a59120(iVar6,param_1,**(undefined4 **)(_UNK_02beb0f0 + 0x2beae74),0);
          iVar9 = *(int *)(iVar3 + 8);
          uVar5 = *(uint *)(iVar3 + 0xc);
          iVar12 = *piVar11;
          *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          if (uVar5 < *(uint *)(iVar9 + 0xc)) {
            *(uint *)(iVar3 + 0xc) = uVar5 + 1;
            piVar11 = (int *)(iVar9 + uVar5 * 4 + 0x10);
            *piVar11 = iVar6;
          }
          else {
            func_0x0152874c(iVar3,iVar6,
                            *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
            iVar6 = func_0x014388d4(*puVar10);
            func_0x04a59120(iVar6,param_1,**(undefined4 **)(_UNK_02beb0f4 + 0x2beaf00),0);
            iVar9 = *(int *)(iVar3 + 8);
            uVar5 = *(uint *)(iVar3 + 0xc);
            iVar12 = *piVar11;
            *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
            if (iVar9 == 0) {
              func_0x014388e4();
            }
            if (uVar5 < *(uint *)(iVar9 + 0xc)) {
              *(uint *)(iVar3 + 0xc) = uVar5 + 1;
              piVar11 = (int *)(iVar9 + uVar5 * 4 + 0x10);
              *piVar11 = iVar6;
            }
            else {
              func_0x0152874c(iVar3,iVar6,
                              *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
              iVar6 = func_0x014388d4(*puVar10);
              func_0x04a59120(iVar6,param_1,**(undefined4 **)(_UNK_02beb0f8 + 0x2beaf8c),0);
              iVar9 = *(int *)(iVar3 + 8);
              uVar5 = *(uint *)(iVar3 + 0xc);
              iVar12 = *piVar11;
              *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
              if (iVar9 == 0) {
                func_0x014388e4();
              }
              if (uVar5 < *(uint *)(iVar9 + 0xc)) {
                *(uint *)(iVar3 + 0xc) = uVar5 + 1;
                piVar11 = (int *)(iVar9 + uVar5 * 4 + 0x10);
                *piVar11 = iVar6;
              }
              else {
                func_0x0152874c(iVar3,iVar6,
                                *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
                iVar6 = func_0x014388d4(*puVar10);
                func_0x04a59120(iVar6,param_1,**(undefined4 **)(_UNK_02beb0fc + 0x2beb018),0);
                iVar9 = *(int *)(iVar3 + 8);
                uVar5 = *(uint *)(iVar3 + 0xc);
                iVar12 = *piVar11;
                *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
                if (iVar9 == 0) {
                  func_0x014388e4();
                }
                if (uVar5 < *(uint *)(iVar9 + 0xc)) {
                  *(uint *)(iVar3 + 0xc) = uVar5 + 1;
                  piVar11 = (int *)(iVar9 + uVar5 * 4 + 0x10);
                  *piVar11 = iVar6;
                }
                else {
                  func_0x0152874c(iVar3,iVar6,
                                  *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
                  piVar11 = (int *)(param_1 + 0xdc);
                  *piVar11 = iVar3;
                }
              }
            }
          }
        }
      }
    }
  }
  if (*(int *)(_UNK_01408518 + 0x14084d8) != 0) {
    puVar2 = (uint *)(&UNK_0142c764 + _UNK_0140851c + ((uint)piVar11 >> 0x11) * 4);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)piVar11 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

