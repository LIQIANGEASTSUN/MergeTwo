
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01838cfc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_01839190 + 0x1838d20);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01839194 + 0x1838d34));
    func_0x01438628(*(undefined4 *)(_UNK_01839198 + 0x1838d40));
    func_0x01438628(*(undefined4 *)(_UNK_0183919c + 0x1838d4c));
    func_0x01438628(*(undefined4 *)(_UNK_018391a0 + 0x1838d58));
    func_0x01438628(*(undefined4 *)(_UNK_018391a4 + 0x1838d64));
    func_0x01438628(*(undefined4 *)(_UNK_018391a8 + 0x1838d70));
    func_0x01438628(*(undefined4 *)(_UNK_018391ac + 0x1838d7c));
    func_0x01438628(*(undefined4 *)(_UNK_018391b0 + 0x1838d88));
    func_0x01438628(*(undefined4 *)(_UNK_018391b4 + 0x1838d94));
    func_0x01438628(*(undefined4 *)(_UNK_018391b8 + 0x1838da0));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x922f,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_018391bc + 0x1838e10) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_01833590();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_0183822c(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_018391c0 + 0x1838e74);
      do {
        uStack_28 = func_0x024f0530(iVar1,iVar6,**(undefined4 **)(_UNK_018391c4 + 0x1838e88));
        if (*(int *)(**(int **)(_UNK_018391c8 + 0x1838ea0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_018391cc + 0x1838ec0));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_018391d0 + 0x1838f8c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_01833590();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = FUN_01838640(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x024f05ac(iVar3,uVar2,**(undefined4 **)(_UNK_018391d4 + 0x1838fdc));
          iVar3 = FUN_01833590();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = FUN_018386ac();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x018512cc(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_018391d8 + 0x1838f08) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_018391dc + 0x1838f24));
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
        func_0x020257a4(iVar3,0x2a7,uVar2,**(undefined4 **)(_UNK_018391e0 + 0x1839090),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_018391e4 + 0x18390c8) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_018391e8 + 0x1839124));
          func_0x02025440(iVar4,0);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          *(undefined1 *)(iVar4 + 0x25) = 0;
          *(undefined4 *)(iVar4 + 8) = 0x6d;
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
    iVar1 = func_0x029540a4(0x922f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

