
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0330d164(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_0330d5f4 + 0x330d188);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0330d5f8 + 0x330d19c));
    func_0x01438628(*(undefined4 *)(_UNK_0330d5fc + 0x330d1a8));
    func_0x01438628(*(undefined4 *)(_UNK_0330d600 + 0x330d1b4));
    func_0x01438628(*(undefined4 *)(_UNK_0330d604 + 0x330d1c0));
    func_0x01438628(*(undefined4 *)(_UNK_0330d608 + 0x330d1cc));
    func_0x01438628(*(undefined4 *)(_UNK_0330d60c + 0x330d1d8));
    func_0x01438628(*(undefined4 *)(_UNK_0330d610 + 0x330d1e4));
    func_0x01438628(*(undefined4 *)(_UNK_0330d614 + 0x330d1f0));
    func_0x01438628(*(undefined4 *)(_UNK_0330d618 + 0x330d1fc));
    func_0x01438628(*(undefined4 *)(_UNK_0330d61c + 0x330d208));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x84e9,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0330d620 + 0x330d278) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_0330a560();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0330d650(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_0330d624 + 0x330d2dc);
      do {
        uStack_28 = func_0x04cd26d0(iVar1,iVar6,**(undefined4 **)(_UNK_0330d628 + 0x330d2f0));
        if (*(int *)(**(int **)(_UNK_0330d62c + 0x330d308) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_0330d630 + 0x330d328));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_0330d634 + 0x330d3f4) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_0330a560();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x0330da64(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar3,uVar2,**(undefined4 **)(_UNK_0330d638 + 0x330d444));
          iVar3 = FUN_0330a560();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = func_0x0330dad0();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x0330dc24(iVar3);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_0330d63c + 0x330d370) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_0330d640 + 0x330d38c));
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
        func_0x020257a4(iVar3,0x220,uVar2,**(undefined4 **)(_UNK_0330d644 + 0x330d4f4),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_0330d648 + 0x330d52c) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_0330d64c + 0x330d588));
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
    iVar1 = func_0x029540a4(0x84e9,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

