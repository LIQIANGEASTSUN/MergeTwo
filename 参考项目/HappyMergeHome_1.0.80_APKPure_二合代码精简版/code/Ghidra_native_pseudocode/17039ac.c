
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_017139ac(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_01713e40 + 0x17139d0);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01713e44 + 0x17139e4));
    func_0x01438628(*(undefined4 *)(_UNK_01713e48 + 0x17139f0));
    func_0x01438628(*(undefined4 *)(_UNK_01713e4c + 0x17139fc));
    func_0x01438628(*(undefined4 *)(_UNK_01713e50 + 0x1713a08));
    func_0x01438628(*(undefined4 *)(_UNK_01713e54 + 0x1713a14));
    func_0x01438628(*(undefined4 *)(_UNK_01713e58 + 0x1713a20));
    func_0x01438628(*(undefined4 *)(_UNK_01713e5c + 0x1713a2c));
    func_0x01438628(*(undefined4 *)(_UNK_01713e60 + 0x1713a38));
    func_0x01438628(*(undefined4 *)(_UNK_01713e64 + 0x1713a44));
    func_0x01438628(*(undefined4 *)(_UNK_01713e68 + 0x1713a50));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x8b6d,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01713e6c + 0x1713ac0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_0170e674();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_01712edc(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_01713e70 + 0x1713b24);
      do {
        uStack_28 = func_0x024f0530(iVar1,iVar6,**(undefined4 **)(_UNK_01713e74 + 0x1713b38));
        if (*(int *)(**(int **)(_UNK_01713e78 + 0x1713b50) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_01713e7c + 0x1713b70));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_01713e80 + 0x1713c3c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_0170e674();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = FUN_017132f0(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x024f05ac(iVar3,uVar2,**(undefined4 **)(_UNK_01713e84 + 0x1713c8c));
          iVar3 = FUN_0170e674();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = FUN_0171335c();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x0172b898(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_01713e88 + 0x1713bb8) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_01713e8c + 0x1713bd4));
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
        func_0x020257a4(iVar3,0x220,uVar2,**(undefined4 **)(_UNK_01713e90 + 0x1713d40),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_01713e94 + 0x1713d78) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_01713e98 + 0x1713dd4));
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
    iVar1 = func_0x029540a4(0x8b6d,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

