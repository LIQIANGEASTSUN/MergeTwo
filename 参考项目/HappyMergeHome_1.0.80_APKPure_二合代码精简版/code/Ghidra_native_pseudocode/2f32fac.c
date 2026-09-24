
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02f42fac(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_02f43440 + 0x2f42fd0);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f43444 + 0x2f42fe4));
    func_0x01438628(*(undefined4 *)(_UNK_02f43448 + 0x2f42ff0));
    func_0x01438628(*(undefined4 *)(_UNK_02f4344c + 0x2f42ffc));
    func_0x01438628(*(undefined4 *)(_UNK_02f43450 + 0x2f43008));
    func_0x01438628(*(undefined4 *)(_UNK_02f43454 + 0x2f43014));
    func_0x01438628(*(undefined4 *)(_UNK_02f43458 + 0x2f43020));
    func_0x01438628(*(undefined4 *)(_UNK_02f4345c + 0x2f4302c));
    func_0x01438628(*(undefined4 *)(_UNK_02f43460 + 0x2f43038));
    func_0x01438628(*(undefined4 *)(_UNK_02f43464 + 0x2f43044));
    func_0x01438628(*(undefined4 *)(_UNK_02f43468 + 0x2f43050));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x6ded,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02f4346c + 0x2f430c0) + 0x74) == 0) {
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
      piVar8 = *(int **)(_UNK_02f43470 + 0x2f43124);
      do {
        uStack_28 = func_0x04cd26d0(iVar1,iVar6,**(undefined4 **)(_UNK_02f43474 + 0x2f43138));
        if (*(int *)(**(int **)(_UNK_02f43478 + 0x2f43150) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_02f4347c + 0x2f43170));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_02f43480 + 0x2f4323c) + 0x74) == 0) {
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
          func_0x03b75ba0(iVar3,uVar2,**(undefined4 **)(_UNK_02f43484 + 0x2f4328c));
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
          if (*(int *)(**(int **)(_UNK_02f43488 + 0x2f431b8) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_02f4348c + 0x2f431d4));
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
        func_0x020257a4(iVar3,0x2f4,uVar2,**(undefined4 **)(_UNK_02f43490 + 0x2f43340),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_02f43494 + 0x2f43378) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = FUN_02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_02f43498 + 0x2f433d4));
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
    iVar1 = func_0x029540a4(0x6ded,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

