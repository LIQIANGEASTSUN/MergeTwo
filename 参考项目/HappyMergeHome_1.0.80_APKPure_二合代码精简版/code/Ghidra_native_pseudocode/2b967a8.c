
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02ba67a8(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  float fStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_02ba6c44 + 0x2ba67c0);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02ba6c48 + 0x2ba67d4));
    func_0x01438628(*(undefined4 *)(_UNK_02ba6c4c + 0x2ba67e0));
    func_0x01438628(*(undefined4 *)(_UNK_02ba6c50 + 0x2ba67ec));
    func_0x01438628(*(undefined4 *)(_UNK_02ba6c54 + 0x2ba67f8));
    func_0x01438628(*(undefined4 *)(_UNK_02ba6c58 + 0x2ba6804));
    func_0x01438628(*(undefined4 *)(_UNK_02ba6c5c + 0x2ba6810));
    func_0x01438628(*(undefined4 *)(_UNK_02ba6c60 + 0x2ba681c));
    func_0x01438628(*(undefined4 *)(_UNK_02ba6c64 + 0x2ba6828));
    func_0x01438628(*(undefined4 *)(_UNK_02ba6c68 + 0x2ba6834));
    func_0x01438628(*(undefined4 *)(_UNK_02ba6c6c + 0x2ba6840));
    func_0x01438628(*(undefined4 *)(_UNK_02ba6c70 + 0x2ba684c));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xfec,0);
  if (iVar1 == 0) {
    piVar12 = *(int **)(_UNK_02ba6c74 + 0x2ba68a8);
    iVar1 = **(int **)(*piVar12 + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02b63a9c(iVar1,0x1a6,0,0);
    if (iVar1 == 0) {
      if (*(int *)(**(int **)(_UNK_02ba6c78 + 0x2ba68e4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02ba6c7c + 0x2ba6900));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x03579aec(iVar1,**(undefined4 **)(_UNK_02ba6c84 + 0x2ba692c),
                              **(undefined4 **)(_UNK_02ba6c80 + 0x2ba6920));
      piVar11 = *(int **)(_UNK_02ba6c88 + 0x2ba6944);
      if (*(int *)(*piVar11 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x024eec50(iVar1,0,0);
      if (iVar5 == 0) {
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar5 = func_0x014e94d8(iVar1,0);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = func_0x024efc2c(iVar5,0);
        if (iVar5 != 0) {
          iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_02ba6c8c + 0x2ba69b4));
          func_0x024eed9c(iVar5,**(undefined4 **)(_UNK_02ba6c90 + 0x2ba69c8));
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uVar7 = func_0x024eecb8(iVar1,0);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar9 = *(int *)(iVar5 + 8);
          uVar8 = *(uint *)(iVar5 + 0xc);
          piVar3 = *(int **)(_UNK_02ba6c94 + 0x2ba6a18);
          *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
          iVar13 = *piVar3;
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          if (uVar8 < *(uint *)(iVar9 + 0xc)) {
            *(uint *)(iVar5 + 0xc) = uVar8 + 1;
            puVar2 = (undefined4 *)(iVar9 + uVar8 * 4 + 0x10);
            *puVar2 = uVar7;
            func_0x014385cc(puVar2,uVar7);
          }
          else {
            func_0x0152874c(iVar5,uVar7,
                            *(undefined4 *)(*(int *)(*(int *)(iVar13 + 0x10) + 0x60) + 0x38));
          }
          iVar9 = **(int **)(*piVar12 + 0x5c);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          piVar3 = (int *)func_0x024eecb8(iVar1,0);
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          piVar10 = (int *)0x0;
          if ((piVar3 != (int *)0x0) &&
             (piVar10 = piVar3, *piVar3 != **(int **)(_UNK_02ba6c98 + 0x2ba6ab0))) {
            piVar10 = (int *)0x0;
          }
          uStack_3c = 1;
          uStack_34 = 0;
          uStack_40 = 0;
          iStack_38 = iVar5;
          func_0x02b647b4(iVar9,0x1a6,piVar10,0);
          iVar5 = **(int **)(*piVar12 + 0x5c);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          uStack_40 = 0;
          iVar5 = func_0x02b6127c(iVar5,0x1a6,0,0);
          if (iVar5 != 0) {
            piVar12 = *(int **)(_UNK_02ba6c9c + 0x2ba6b28);
            uVar7 = **(undefined4 **)(*piVar12 + 0x5c);
            if (*(int *)(*piVar11 + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar5 = func_0x024ef144(uVar7,0,0);
            if (iVar5 != 0) {
              iVar5 = **(int **)(*piVar12 + 0x5c);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar7 = func_0x02d06f88(iVar5,0);
              if (*(int *)(*piVar11 + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar5 = func_0x024ef144(uVar7,0,0);
              if (iVar5 != 0) {
                iVar5 = **(int **)(*piVar12 + 0x5c);
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                uVar7 = func_0x02d06f88(iVar5,0);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                iVar1 = func_0x024eecb8(iVar1,0);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                func_0x024f0474(&fStack_30,iVar1,0);
                uStack_40 = 0;
                func_0x0157e8ec(uVar7,_UNK_02ba6c40 - fStack_30,0,0);
              }
            }
          }
        }
      }
    }
    return;
  }
  iVar1 = func_0x029540a4(0xfec,0);
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
  uVar7 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar4 = 2;
  if (iVar1 == 0) {
    uVar4 = 1;
  }
  func_0x024f56d0(iVar5,uVar7,&fStack_30,uVar4,0,0);
  return;
}

