
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_019254bc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_01925950 + 0x19254e0);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01925954 + 0x19254f4));
    func_0x01438628(*(undefined4 *)(_UNK_01925958 + 0x1925500));
    func_0x01438628(*(undefined4 *)(_UNK_0192595c + 0x192550c));
    func_0x01438628(*(undefined4 *)(_UNK_01925960 + 0x1925518));
    func_0x01438628(*(undefined4 *)(_UNK_01925964 + 0x1925524));
    func_0x01438628(*(undefined4 *)(_UNK_01925968 + 0x1925530));
    func_0x01438628(*(undefined4 *)(_UNK_0192596c + 0x192553c));
    func_0x01438628(*(undefined4 *)(_UNK_01925970 + 0x1925548));
    func_0x01438628(*(undefined4 *)(_UNK_01925974 + 0x1925554));
    func_0x01438628(*(undefined4 *)(_UNK_01925978 + 0x1925560));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x978b,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0192597c + 0x19255d0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_01920184();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_019249ec(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_01925980 + 0x1925634);
      do {
        uStack_28 = func_0x024f0530(iVar1,iVar6,**(undefined4 **)(_UNK_01925984 + 0x1925648));
        if (*(int *)(**(int **)(_UNK_01925988 + 0x1925660) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_0192598c + 0x1925680));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_01925990 + 0x192574c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_01920184();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = FUN_01924e00(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x024f05ac(iVar3,uVar2,**(undefined4 **)(_UNK_01925994 + 0x192579c));
          iVar3 = FUN_01920184();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = FUN_01924e6c();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x0193d3a8(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_01925998 + 0x19256c8) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_0192599c + 0x19256e4));
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
        func_0x020257a4(iVar3,0x220,uVar2,**(undefined4 **)(_UNK_019259a0 + 0x1925850),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_019259a4 + 0x1925888) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_019259a8 + 0x19258e4));
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
    iVar1 = func_0x029540a4(0x978b,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

