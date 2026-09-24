
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0330e180(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_0330e610 + 0x330e1a4);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0330e614 + 0x330e1b8));
    func_0x01438628(*(undefined4 *)(_UNK_0330e618 + 0x330e1c4));
    func_0x01438628(*(undefined4 *)(_UNK_0330e61c + 0x330e1d0));
    func_0x01438628(*(undefined4 *)(_UNK_0330e620 + 0x330e1dc));
    func_0x01438628(*(undefined4 *)(_UNK_0330e624 + 0x330e1e8));
    func_0x01438628(*(undefined4 *)(_UNK_0330e628 + 0x330e1f4));
    func_0x01438628(*(undefined4 *)(_UNK_0330e62c + 0x330e200));
    func_0x01438628(*(undefined4 *)(_UNK_0330e630 + 0x330e20c));
    func_0x01438628(*(undefined4 *)(_UNK_0330e634 + 0x330e218));
    func_0x01438628(*(undefined4 *)(_UNK_0330e638 + 0x330e224));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x8521,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0330e63c + 0x330e294) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_0330a560();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_0330d650(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_0330e640 + 0x330e2f8);
      do {
        uStack_28 = func_0x04cd26d0(iVar1,iVar6,**(undefined4 **)(_UNK_0330e644 + 0x330e30c));
        if (*(int *)(**(int **)(_UNK_0330e648 + 0x330e324) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_0330e64c + 0x330e344));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_0330e650 + 0x330e410) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_0330a560();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = FUN_0330da64(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar3,uVar2,**(undefined4 **)(_UNK_0330e654 + 0x330e460));
          iVar3 = FUN_0330a560();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = FUN_0330dad0();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            FUN_0330dc24(iVar3);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_0330e658 + 0x330e38c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_0330e65c + 0x330e3a8));
          uVar2 = uStack_28;
          uVar7 = *(undefined4 *)(param_1 + 0x10);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          func_0x02bd2cf0(iVar4,iVar3,uVar2,1,2,uVar7,param_2,1,0xffffffff,0,0);
        }
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x0202346c(0);
        uVar2 = func_0x0515c4b0(&uStack_28,0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x020257a4(iVar3,0x220,uVar2,**(undefined4 **)(_UNK_0330e660 + 0x330e510),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_0330e664 + 0x330e548) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_0330e668 + 0x330e5a4));
          func_0x02025440(iVar4,0);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          *(undefined1 *)(iVar4 + 0x25) = 0;
          *(undefined4 *)(iVar4 + 8) = 0x46;
          *(undefined4 *)(iVar4 + 0xc) = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x02024d08(iVar3,iVar4,1,0);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(iVar1 + 0xc));
      uVar2 = 0;
    }
  }
  else {
    iVar1 = func_0x029540a4(0x8521,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

