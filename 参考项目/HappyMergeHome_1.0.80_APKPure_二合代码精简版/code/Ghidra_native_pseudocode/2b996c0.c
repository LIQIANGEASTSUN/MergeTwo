
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02ba96c0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  float fStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_02ba9d0c + 0x2ba96d8);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02ba9d10 + 0x2ba96ec));
    func_0x01438628(*(undefined4 *)(_UNK_02ba9d14 + 0x2ba96f8));
    func_0x01438628(*(undefined4 *)(_UNK_02ba9d18 + 0x2ba9704));
    func_0x01438628(*(undefined4 *)(_UNK_02ba9d1c + 0x2ba9710));
    func_0x01438628(*(undefined4 *)(_UNK_02ba9d20 + 0x2ba971c));
    func_0x01438628(*(undefined4 *)(_UNK_02ba9d24 + 0x2ba9728));
    func_0x01438628(*(undefined4 *)(_UNK_02ba9d28 + 0x2ba9734));
    func_0x01438628(*(undefined4 *)(_UNK_02ba9d2c + 0x2ba9740));
    func_0x01438628(*(undefined4 *)(_UNK_02ba9d30 + 0x2ba974c));
    func_0x01438628(*(undefined4 *)(_UNK_02ba9d34 + 0x2ba9758));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1015,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1015,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    fStack_30 = 0.0;
    func_0x024f56c0(&fStack_48,0,0);
    fStack_30 = fStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&fStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&fStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x024f56d0(iVar5,uVar8,&fStack_30,uVar4,0,0);
    return;
  }
  piVar10 = *(int **)(_UNK_02ba9d38 + 0x2ba97b4);
  iVar1 = **(int **)(*piVar10 + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(char *)(iVar1 + 0x2d) != '\0') {
    piVar7 = *(int **)(_UNK_02ba9d3c + 0x2ba97e0);
    iVar1 = *piVar7;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
      iVar1 = *piVar7;
    }
    if (*(char *)(*(int *)(iVar1 + 0x5c) + 4) == '\0') {
      return;
    }
    iVar5 = **(int **)(*piVar10 + 0x5c);
    if (iVar5 == 0) {
      func_0x014388e4();
      iVar1 = *piVar7;
    }
    iVar3 = *(int *)(iVar1 + 0x74);
    *(undefined1 *)(iVar5 + 0x2d) = 0;
    if (iVar3 == 0) {
      func_0x014387a4();
      iVar1 = *piVar7;
    }
    *(undefined1 *)(*(int *)(iVar1 + 0x5c) + 4) = 0;
  }
  iVar1 = func_0x01c1641c(0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x01c16b0c(iVar1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x01c1641c(0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x01c17130(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(char *)(iVar1 + 0xc) != '\0') {
      piVar7 = *(int **)(_UNK_02ba9d40 + 0x2ba98bc);
      pcVar6 = *(char **)(*piVar7 + 0x5c);
      if (pcVar6[1] == '\0') {
        iVar1 = **(int **)(*piVar10 + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x02b63a9c(iVar1,0xa29,0,0);
        if (iVar1 == 0) {
          piVar7 = *(int **)(_UNK_02ba9d58 + 0x2ba9ab4);
          iVar1 = **(int **)(*piVar7 + 0x5c);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x02d0637c(iVar1,0);
          piVar11 = *(int **)(_UNK_02ba9d5c + 0x2ba9ae4);
          if (*(int *)(*piVar11 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar5 = func_0x024ef144(iVar1,0,0);
          if (iVar5 != 0) {
            iVar5 = **(int **)(*piVar10 + 0x5c);
            if (iVar1 == 0) {
              func_0x014388e4();
              piVar2 = (int *)func_0x02ce3454(0,0);
              func_0x014388e4();
            }
            else {
              piVar2 = (int *)func_0x02ce3454(iVar1,0);
            }
            uStack_38 = func_0x02ce3454(iVar1,0);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            piVar9 = (int *)0x0;
            if ((piVar2 != (int *)0x0) &&
               (piVar9 = piVar2, *piVar2 != **(int **)(_UNK_02ba9d60 + 0x2ba9b80))) {
              piVar9 = (int *)0x0;
            }
            uStack_3c = 1;
            uStack_34 = 0;
            uStack_40 = 0;
            func_0x02b63f30(iVar5,0xa29,piVar9,0);
            iVar5 = **(int **)(*piVar10 + 0x5c);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            uStack_40 = 0;
            iVar5 = func_0x02b6127c(iVar5,0xa29,0,0);
            if (iVar5 != 0) {
              uVar8 = **(undefined4 **)(*piVar7 + 0x5c);
              if (*(int *)(*piVar11 + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar5 = func_0x024ef144(uVar8,0,0);
              if (iVar5 != 0) {
                iVar5 = **(int **)(*piVar7 + 0x5c);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                uVar8 = func_0x02d06f88(iVar5,0);
                if (*(int *)(*piVar11 + 0x74) == 0) {
                  func_0x014387a4();
                }
                iVar5 = func_0x024ef144(uVar8,0,0);
                if (iVar5 != 0) {
                  iVar5 = **(int **)(*piVar7 + 0x5c);
                  if (iVar5 == 0) {
                    func_0x014388e4();
                  }
                  uVar8 = func_0x02d06f88(iVar5,0);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = func_0x024eecb8(iVar1,0);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  func_0x024f0474(&fStack_30,iVar1,0);
                  uStack_40 = 0;
                  func_0x0157e8ec(uVar8,_UNK_02ba9d08 - fStack_30,0,0);
                }
              }
            }
          }
        }
      }
      else if (*pcVar6 == '\0') {
        piVar10 = *(int **)(_UNK_02ba9d44 + 0x2ba98e4);
        iVar1 = **(int **)(*piVar10 + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x02d064ec(iVar1,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar1 + 0xc) != 0) {
          iVar5 = func_0x0152983c(iVar1,0,**(undefined4 **)(_UNK_02ba9d48 + 0x2ba9930));
          iVar3 = **(int **)(*piVar10 + 0x5c);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uVar8 = func_0x02d06f88(iVar3,0);
          if (*(int *)(**(int **)(_UNK_02ba9d4c + 0x2ba9970) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x024ef144(uVar8,0,0);
          if (iVar3 != 0) {
            iVar3 = **(int **)(*piVar10 + 0x5c);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            uVar8 = func_0x02d06f88(iVar3,0);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x024eecb8(iVar5,0);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x024f0474(&fStack_30,iVar5,0);
            uStack_40 = 0;
            func_0x0157e8ec(uVar8,_UNK_02ba9d08 - fStack_30,0,0);
          }
          uVar8 = **(undefined4 **)(_UNK_02ba9d50 + 0x2ba9a38);
          **(undefined2 **)(*piVar7 + 0x5c) = 1;
          uVar8 = func_0x014388d4(uVar8);
          func_0x0152e3ec(uVar8,param_1,**(undefined4 **)(_UNK_02ba9d54 + 0x2ba9a58),0);
          func_0x01c153fc(iVar1,uVar8,0);
        }
      }
    }
  }
  return;
}

