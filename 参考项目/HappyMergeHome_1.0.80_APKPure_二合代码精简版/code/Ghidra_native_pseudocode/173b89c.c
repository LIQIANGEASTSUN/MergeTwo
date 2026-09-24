
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0174b89c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_0174bd30 + 0x174b8c0);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0174bd34 + 0x174b8d4));
    func_0x01438628(*(undefined4 *)(_UNK_0174bd38 + 0x174b8e0));
    func_0x01438628(*(undefined4 *)(_UNK_0174bd3c + 0x174b8ec));
    func_0x01438628(*(undefined4 *)(_UNK_0174bd40 + 0x174b8f8));
    func_0x01438628(*(undefined4 *)(_UNK_0174bd44 + 0x174b904));
    func_0x01438628(*(undefined4 *)(_UNK_0174bd48 + 0x174b910));
    func_0x01438628(*(undefined4 *)(_UNK_0174bd4c + 0x174b91c));
    func_0x01438628(*(undefined4 *)(_UNK_0174bd50 + 0x174b928));
    func_0x01438628(*(undefined4 *)(_UNK_0174bd54 + 0x174b934));
    func_0x01438628(*(undefined4 *)(_UNK_0174bd58 + 0x174b940));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x8cb6,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0174bd5c + 0x174b9b0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_01747688();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0174bd8c(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_0174bd60 + 0x174ba14);
      do {
        uStack_28 = func_0x024f0530(iVar1,iVar6,**(undefined4 **)(_UNK_0174bd64 + 0x174ba28));
        if (*(int *)(**(int **)(_UNK_0174bd68 + 0x174ba40) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_0174bd6c + 0x174ba60));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_0174bd70 + 0x174bb2c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_01747688();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x0174c1a0(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x024f05ac(iVar3,uVar2,**(undefined4 **)(_UNK_0174bd74 + 0x174bb7c));
          iVar3 = FUN_01747688();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = func_0x0174c20c();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x01780d44(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_0174bd78 + 0x174baa8) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_0174bd7c + 0x174bac4));
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
        func_0x020257a4(iVar3,0x322,uVar2,**(undefined4 **)(_UNK_0174bd80 + 0x174bc30),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_0174bd84 + 0x174bc68) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_0174bd88 + 0x174bcc4));
          func_0x02025440(iVar4,0);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          *(undefined1 *)(iVar4 + 0x25) = 0;
          *(undefined4 *)(iVar4 + 8) = 0x7f;
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
    iVar1 = func_0x029540a4(0x8cb6,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

