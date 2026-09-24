
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0174d90c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_0174dda0 + 0x174d930);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0174dda4 + 0x174d944));
    func_0x01438628(*(undefined4 *)(_UNK_0174dda8 + 0x174d950));
    func_0x01438628(*(undefined4 *)(_UNK_0174ddac + 0x174d95c));
    func_0x01438628(*(undefined4 *)(_UNK_0174ddb0 + 0x174d968));
    func_0x01438628(*(undefined4 *)(_UNK_0174ddb4 + 0x174d974));
    func_0x01438628(*(undefined4 *)(_UNK_0174ddb8 + 0x174d980));
    func_0x01438628(*(undefined4 *)(_UNK_0174ddbc + 0x174d98c));
    func_0x01438628(*(undefined4 *)(_UNK_0174ddc0 + 0x174d998));
    func_0x01438628(*(undefined4 *)(_UNK_0174ddc4 + 0x174d9a4));
    func_0x01438628(*(undefined4 *)(_UNK_0174ddc8 + 0x174d9b0));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x8cf4,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0174ddcc + 0x174da20) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_01747688();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_0174bd8c(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_0174ddd0 + 0x174da84);
      do {
        uStack_28 = func_0x024f0530(iVar1,iVar6,**(undefined4 **)(_UNK_0174ddd4 + 0x174da98));
        if (*(int *)(**(int **)(_UNK_0174ddd8 + 0x174dab0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_0174dddc + 0x174dad0));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_0174dde0 + 0x174db9c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_01747688();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = FUN_0174c1a0(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x024f05ac(iVar3,uVar2,**(undefined4 **)(_UNK_0174dde4 + 0x174dbec));
          iVar3 = FUN_01747688();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = FUN_0174c20c();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x01780d44(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_0174dde8 + 0x174db18) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_0174ddec + 0x174db34));
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
        func_0x020257a4(iVar3,0x322,uVar2,**(undefined4 **)(_UNK_0174ddf0 + 0x174dca0),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_0174ddf4 + 0x174dcd8) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_0174ddf8 + 0x174dd34));
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
    iVar1 = func_0x029540a4(0x8cf4,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

