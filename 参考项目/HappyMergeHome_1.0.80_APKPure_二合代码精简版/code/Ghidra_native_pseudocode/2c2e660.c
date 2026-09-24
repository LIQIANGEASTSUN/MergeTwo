
/* WARNING: Removing unreachable block (ram,0x02b0eb7c) */
/* WARNING: Removing unreachable block (ram,0x02b0eb94) */
/* WARNING: Removing unreachable block (ram,0x02b0eb98) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c3e660(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 *puVar12;
  int *piVar13;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar7 = (char *)(_UNK_02c3e730 + 0x2c3e674);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c3e734 + 0x2c3e688));
    func_0x01438628(*(undefined4 *)(_UNK_02c3e738 + 0x2c3e694));
    *pcVar7 = '\x01';
  }
  iVar3 = func_0x02953fd4(0xe79,0);
  if (iVar3 == 0) {
    FUN_02c3c8b4(param_1);
    if (*(int *)(**(int **)(_UNK_02c3e73c + 0x2c3e6f4) + 0x74) == 0) {
      func_0x014387a4();
    }
    param_1 = func_0x014e9518(**(undefined4 **)(_UNK_02c3e740 + 0x2c3e710));
    if (param_1 == 0) {
      func_0x014388e4();
    }
    pcVar7 = (char *)(_UNK_02c3954c + 0x2c391d4);
    if (*pcVar7 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c39550 + 0x2c391e8));
      func_0x01438628(*(undefined4 *)(_UNK_02c39554 + 0x2c391f4));
      func_0x01438628(*(undefined4 *)(_UNK_02c39558 + 0x2c39200));
      func_0x01438628(*(undefined4 *)(_UNK_02c3955c + 0x2c3920c));
      func_0x01438628(*(undefined4 *)(_UNK_02c39560 + 0x2c39218));
      *pcVar7 = '\x01';
    }
    iVar3 = func_0x02953fd4(0xa06,0);
    if (iVar3 == 0) {
      piVar13 = *(int **)(_UNK_02c39564 + 0x2c39274);
      if (*(int *)(*piVar13 + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar12 = *(undefined4 **)(_UNK_02c39568 + 0x2c39290);
      iVar3 = func_0x014e9518(*puVar12);
      piVar11 = *(int **)(_UNK_02c3956c + 0x2c392a4);
      iVar6 = *piVar11;
      if (*(int *)(iVar6 + 0x74) == 0) {
        func_0x014387a4();
        iVar6 = *piVar11;
      }
      uVar8 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x194);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      piVar1 = (int *)func_0x02b0fc08(iVar3,uVar8,0);
      piVar2 = (int *)0x0;
      if (piVar1 != (int *)0x0) {
        uVar5 = (uint)*(byte *)(**(int **)(_UNK_02c39570 + 0x2c392f4) + 0xb8);
        if ((uVar5 <= *(byte *)(*piVar1 + 0xb8)) &&
           (piVar2 = piVar1,
           *(int *)(*(int *)(*piVar1 + 100) + uVar5 * 4 + -4) !=
           **(int **)(_UNK_02c39570 + 0x2c392f4))) {
          piVar2 = (int *)0x0;
        }
      }
      if (*(int *)(**(int **)(_UNK_02c39574 + 0x2c3932c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x024ef144(piVar2,0,0);
      if (iVar3 != 0) {
        if (piVar2 == (int *)0x0) {
          func_0x014388e4();
        }
        iVar3 = func_0x024eecb8(piVar2,0);
        iVar6 = func_0x02b1cc10(0);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = *(int *)(iVar6 + 0x18);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        uVar8 = func_0x024ef308(iVar6,0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x024ef854(iVar3,uVar8,0);
        if (piVar2 == (int *)0x0) {
          func_0x014388e4();
        }
        iVar3 = func_0x024eecb8(piVar2,0);
        pcVar7 = (char *)(_UNK_02c39578 + 0x2c393ec);
        if (*pcVar7 == '\0') {
          func_0x01438628(*(undefined4 *)(_UNK_02c3957c + 0x2c39400));
          *pcVar7 = '\x01';
        }
        piVar1 = *(int **)(_UNK_02c39580 + 0x2c39418);
        puVar12 = *(undefined4 **)(*piVar1 + 0x5c);
        uVar8 = *puVar12;
        uVar4 = puVar12[1];
        uVar10 = puVar12[2];
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uStack_28 = 0;
        func_0x024ef0bc(iVar3,uVar8,uVar4,uVar10);
        if (piVar2 == (int *)0x0) {
          func_0x014388e4();
        }
        iVar3 = func_0x014e94d8(piVar2,0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x024ef308(iVar3,0);
        pcVar7 = (char *)(_UNK_02c39584 + 0x2c39488);
        if (*pcVar7 == '\0') {
          func_0x01438628(*(undefined4 *)(_UNK_02c39588 + 0x2c3949c));
          *pcVar7 = '\x01';
        }
        iVar6 = *(int *)(*piVar1 + 0x5c);
        uVar8 = *(undefined4 *)(iVar6 + 0xc);
        uVar4 = *(undefined4 *)(iVar6 + 0x10);
        uVar10 = *(undefined4 *)(iVar6 + 0x14);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uStack_28 = 0;
        func_0x024ef328(iVar3,uVar8,uVar4,uVar10);
        puVar12 = *(undefined4 **)(_UNK_02c3958c + 0x2c394e8);
      }
      if (*(int *)(*piVar13 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x014e9518(*puVar12);
      iVar6 = *piVar11;
      if (*(int *)(iVar6 + 0x74) == 0) {
        func_0x014387a4();
        iVar6 = *piVar11;
      }
      uVar8 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x194);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      pcVar7 = (char *)(_UNK_02b0ed3c + 0x2b0ea68);
      if (*pcVar7 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_02b0ed40 + 0x2b0ea7c),uVar8,0,0);
        func_0x01438628(*(undefined4 *)(_UNK_02b0ed44 + 0x2b0ea88));
        func_0x01438628(*(undefined4 *)(_UNK_02b0ed48 + 0x2b0ea94));
        func_0x01438628(*(undefined4 *)(_UNK_02b0ed4c + 0x2b0eaa0));
        func_0x01438628(*(undefined4 *)(_UNK_02b0ed50 + 0x2b0eaac));
        func_0x01438628(*(undefined4 *)(_UNK_02b0ed54 + 0x2b0eab8));
        *pcVar7 = '\x01';
      }
      iVar6 = func_0x02953fd4(399,0);
      if (iVar6 == 0) {
        iVar6 = *(int *)(iVar3 + 0x10);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = func_0x0475561c(iVar6,uVar8,&stack0xffffffe4,
                                **(undefined4 **)(_UNK_02b0ed58 + 0x2b0eb40));
        uVar8 = 0;
        if (iVar6 != 0) {
          func_0x014388e4();
          func_0x02b20eec(0,0,0);
          iVar6 = *(int *)(iVar3 + 0x14);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          uVar8 = 1;
          if (0 < *(int *)(iVar6 + 0xc)) {
            iVar6 = *(int *)(iVar3 + 0x14);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            puVar12 = *(undefined4 **)(_UNK_02b0ed60 + 0x2b0ebf0);
            piVar13 = (int *)func_0x03b680f4(iVar6,*puVar12);
            if (piVar13 == (int *)0x0) {
              func_0x014388e4();
            }
            iVar6 = (**(code **)(*piVar13 + 0xc0))(piVar13,0,*(undefined4 *)(*piVar13 + 0xc4));
            if (iVar6 != 0) {
              do {
                iVar6 = *(int *)(iVar3 + 0x14);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                func_0x03b68138(iVar6,**(undefined4 **)(_UNK_02b0ed64 + 0x2b0ec44));
                iVar6 = *(int *)(iVar3 + 0x14);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                if (*(int *)(iVar6 + 0xc) < 1) break;
                iVar9 = *(int *)(iVar3 + 0x14);
                iVar6 = *(int *)(iVar3 + 0x10);
                if (iVar9 == 0) {
                  func_0x014388e4();
                }
                iVar9 = func_0x03b680f4(iVar9,*puVar12);
                if (iVar9 == 0) {
                  func_0x014388e4();
                }
                uVar4 = func_0x02b20568(iVar9,0);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                iVar6 = func_0x04753c80(iVar6,uVar4,**(undefined4 **)(_UNK_02b0ed68 + 0x2b0ecc4));
              } while (iVar6 == 0);
              iVar6 = *(int *)(iVar3 + 0x14);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              if (0 < *(int *)(iVar6 + 0xc)) {
                iVar6 = *(int *)(iVar3 + 0x14);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                iVar6 = func_0x03b680f4(iVar6,*puVar12);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                func_0x02b21408(iVar6,0);
              }
            }
          }
        }
        func_0x02b0effc(iVar3);
      }
      else {
        iVar6 = func_0x029540a4(399,0);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        uStack_20 = 0;
        uVar8 = func_0x0286e8b4(iVar6,iVar3,uVar8,0);
      }
      return uVar8;
    }
    iVar3 = func_0x029540a4(0xa06,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
  }
  else {
    iVar3 = func_0x029540a4(0xe79,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x024f56c0(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
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
  uVar8 = func_0x024f56d0(iVar6,uVar8,&uStack_30,uVar4,0,0);
  return uVar8;
}

