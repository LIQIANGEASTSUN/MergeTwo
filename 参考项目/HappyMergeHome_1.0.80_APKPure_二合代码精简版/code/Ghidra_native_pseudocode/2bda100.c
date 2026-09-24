
/* WARNING: Possible PIC construction at 0x02bea2f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02bea384: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02bea410: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02bea49c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02bea528: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02bea5b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02bea640: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02bea6cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02bea758: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02bea7e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02bea870: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02bea8fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02bea988: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02beaa14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02bea98c) */
/* WARNING: Removing unreachable block (ram,0x02bea900) */
/* WARNING: Removing unreachable block (ram,0x02bea874) */
/* WARNING: Removing unreachable block (ram,0x02bea7e8) */
/* WARNING: Removing unreachable block (ram,0x02bea75c) */
/* WARNING: Removing unreachable block (ram,0x02bea6d0) */
/* WARNING: Removing unreachable block (ram,0x02bea644) */
/* WARNING: Removing unreachable block (ram,0x02bea5b8) */
/* WARNING: Removing unreachable block (ram,0x02bea52c) */
/* WARNING: Removing unreachable block (ram,0x02bea4a0) */
/* WARNING: Removing unreachable block (ram,0x02bea414) */
/* WARNING: Removing unreachable block (ram,0x02bea388) */
/* WARNING: Removing unreachable block (ram,0x02bea2fc) */
/* WARNING: Removing unreachable block (ram,0x02beaa18) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bea100(int param_1)

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
  
  pcVar7 = (char *)(_UNK_02beaa4c + 0x2bea118);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02beaa50 + 0x2bea12c));
    func_0x01438628(*(undefined4 *)(_UNK_02beaa54 + 0x2bea138));
    func_0x01438628(*(undefined4 *)(_UNK_02beaa58 + 0x2bea144));
    func_0x01438628(*(undefined4 *)(_UNK_02beaa5c + 0x2bea150));
    func_0x01438628(*(undefined4 *)(_UNK_02beaa60 + 0x2bea15c));
    func_0x01438628(*(undefined4 *)(_UNK_02beaa64 + 0x2bea168));
    func_0x01438628(*(undefined4 *)(_UNK_02beaa68 + 0x2bea174));
    func_0x01438628(*(undefined4 *)(_UNK_02beaa6c + 0x2bea180));
    func_0x01438628(*(undefined4 *)(_UNK_02beaa70 + 0x2bea18c));
    func_0x01438628(*(undefined4 *)(_UNK_02beaa74 + 0x2bea198));
    func_0x01438628(*(undefined4 *)(_UNK_02beaa78 + 0x2bea1a4));
    func_0x01438628(*(undefined4 *)(_UNK_02beaa7c + 0x2bea1b0));
    func_0x01438628(*(undefined4 *)(_UNK_02beaa80 + 0x2bea1bc));
    func_0x01438628(*(undefined4 *)(_UNK_02beaa84 + 0x2bea1c8));
    func_0x01438628(*(undefined4 *)(_UNK_02beaa88 + 0x2bea1d4));
    func_0x01438628(*(undefined4 *)(_UNK_02beaa8c + 0x2bea1e0));
    func_0x01438628(*(undefined4 *)(_UNK_02beaa90 + 0x2bea1ec));
    func_0x01438628(*(undefined4 *)(_UNK_02beaa94 + 0x2bea1f8));
    *pcVar7 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x5d5b,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x5d5b,0);
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
  iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_02beaa98 + 0x2bea254));
  func_0x024eed9c(iVar3,**(undefined4 **)(_UNK_02beaa9c + 0x2bea268));
  puVar10 = *(undefined4 **)(_UNK_02beaaa0 + 0x2bea27c);
  iVar6 = func_0x014388d4(*puVar10);
  func_0x04a59120(iVar6,param_1,**(undefined4 **)(_UNK_02beaaa4 + 0x2bea298),0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar9 = *(int *)(iVar3 + 8);
  uVar5 = *(uint *)(iVar3 + 0xc);
  piVar11 = *(int **)(_UNK_02beaaa8 + 0x2bea2cc);
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
    func_0x04a59120(iVar6,param_1,**(undefined4 **)(_UNK_02beaaac + 0x2bea338),0);
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
      func_0x04a59120(iVar6,param_1,**(undefined4 **)(_UNK_02beaab0 + 0x2bea3c4),0);
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
        func_0x04a59120(iVar6,param_1,**(undefined4 **)(_UNK_02beaab4 + 0x2bea450),0);
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
          func_0x04a59120(iVar6,param_1,**(undefined4 **)(_UNK_02beaab8 + 0x2bea4dc),0);
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
            func_0x04a59120(iVar6,param_1,**(undefined4 **)(_UNK_02beaabc + 0x2bea568),0);
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
              func_0x04a59120(iVar6,param_1,**(undefined4 **)(_UNK_02beaac0 + 0x2bea5f4),0);
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
                func_0x04a59120(iVar6,param_1,**(undefined4 **)(_UNK_02beaac4 + 0x2bea680),0);
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
                  func_0x04a59120(iVar6,param_1,**(undefined4 **)(_UNK_02beaac8 + 0x2bea70c),0);
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
                                    *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38)
                                   );
                    iVar6 = func_0x014388d4(*puVar10);
                    func_0x04a59120(iVar6,param_1,**(undefined4 **)(_UNK_02beaacc + 0x2bea798),0);
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
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
                      iVar6 = func_0x014388d4(*puVar10);
                      func_0x04a59120(iVar6,param_1,**(undefined4 **)(_UNK_02beaad0 + 0x2bea824),0);
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
                                        *(undefined4 *)
                                         (*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
                        iVar6 = func_0x014388d4(*puVar10);
                        func_0x04a59120(iVar6,param_1,**(undefined4 **)(_UNK_02beaad4 + 0x2bea8b0),0
                                       );
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
                                          *(undefined4 *)
                                           (*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
                          iVar6 = func_0x014388d4(*puVar10);
                          func_0x04a59120(iVar6,param_1,**(undefined4 **)(_UNK_02beaad8 + 0x2bea93c)
                                          ,0);
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
                                            *(undefined4 *)
                                             (*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
                            iVar6 = func_0x014388d4(*puVar10);
                            func_0x04a59120(iVar6,param_1,
                                            **(undefined4 **)(_UNK_02beaadc + 0x2bea9c8),0);
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
                                              *(undefined4 *)
                                               (*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
                              piVar11 = (int *)(param_1 + 0xe0);
                              *piVar11 = iVar3;
                            }
                          }
                        }
                      }
                    }
                  }
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

