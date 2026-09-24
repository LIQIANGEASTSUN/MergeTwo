
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02f437b4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_02f43c48 + 0x2f437d8);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f43c4c + 0x2f437ec));
    func_0x01438628(*(undefined4 *)(_UNK_02f43c50 + 0x2f437f8));
    func_0x01438628(*(undefined4 *)(_UNK_02f43c54 + 0x2f43804));
    func_0x01438628(*(undefined4 *)(_UNK_02f43c58 + 0x2f43810));
    func_0x01438628(*(undefined4 *)(_UNK_02f43c5c + 0x2f4381c));
    func_0x01438628(*(undefined4 *)(_UNK_02f43c60 + 0x2f43828));
    func_0x01438628(*(undefined4 *)(_UNK_02f43c64 + 0x2f43834));
    func_0x01438628(*(undefined4 *)(_UNK_02f43c68 + 0x2f43840));
    func_0x01438628(*(undefined4 *)(_UNK_02f43c6c + 0x2f4384c));
    func_0x01438628(*(undefined4 *)(_UNK_02f43c70 + 0x2f43858));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x6df1,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02f43c74 + 0x2f438c8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_02f3dd38();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_02f4243c(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_02f43c78 + 0x2f4392c);
      do {
        uStack_28 = func_0x04cd26d0(iVar1,iVar6,**(undefined4 **)(_UNK_02f43c7c + 0x2f43940));
        if (*(int *)(**(int **)(_UNK_02f43c80 + 0x2f43958) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_02f43c84 + 0x2f43978));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_02f43c88 + 0x2f43a44) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_02f3dd38();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = FUN_02f42850(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar3,uVar2,**(undefined4 **)(_UNK_02f43c8c + 0x2f43a94));
          iVar3 = FUN_02f3dd38();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = FUN_02f428bc();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x02f5c1cc(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_02f43c90 + 0x2f439c0) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_02f43c94 + 0x2f439dc));
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
        uVar2 = func_0x01524ffc(&uStack_28,0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x020257a4(iVar3,0x2f4,uVar2,**(undefined4 **)(_UNK_02f43c98 + 0x2f43b48),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_02f43c9c + 0x2f43b80) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = FUN_02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_02f43ca0 + 0x2f43bdc));
          func_0x02025440(iVar4,0);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          *(undefined1 *)(iVar4 + 0x25) = 0;
          *(undefined4 *)(iVar4 + 8) = 0x79;
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
    iVar1 = func_0x029540a4(0x6df1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

