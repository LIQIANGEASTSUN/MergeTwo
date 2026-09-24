
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0310a3fc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar5 = (char *)(_UNK_0310a890 + 0x310a420);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0310a894 + 0x310a434));
    func_0x01438628(*(undefined4 *)(_UNK_0310a898 + 0x310a440));
    func_0x01438628(*(undefined4 *)(_UNK_0310a89c + 0x310a44c));
    func_0x01438628(*(undefined4 *)(_UNK_0310a8a0 + 0x310a458));
    func_0x01438628(*(undefined4 *)(_UNK_0310a8a4 + 0x310a464));
    func_0x01438628(*(undefined4 *)(_UNK_0310a8a8 + 0x310a470));
    func_0x01438628(*(undefined4 *)(_UNK_0310a8ac + 0x310a47c));
    func_0x01438628(*(undefined4 *)(_UNK_0310a8b0 + 0x310a488));
    func_0x01438628(*(undefined4 *)(_UNK_0310a8b4 + 0x310a494));
    func_0x01438628(*(undefined4 *)(_UNK_0310a8b8 + 0x310a4a0));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x7855,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0310a8bc + 0x310a510) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_03105aec();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0310a8ec(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_0310a8c0 + 0x310a574);
      do {
        uStack_28 = func_0x04cd26d0(iVar1,iVar6,**(undefined4 **)(_UNK_0310a8c4 + 0x310a588));
        if (*(int *)(**(int **)(_UNK_0310a8c8 + 0x310a5a0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_0310a8cc + 0x310a5c0));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_0310a8d0 + 0x310a68c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_03105aec();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x0310ad00(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar3,uVar2,**(undefined4 **)(_UNK_0310a8d4 + 0x310a6dc));
          iVar3 = FUN_03105aec();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = func_0x0310ad6c();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x031228fc(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_0310a8d8 + 0x310a608) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_0310a8dc + 0x310a624));
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
        func_0x020257a4(iVar3,0x2dd,uVar2,**(undefined4 **)(_UNK_0310a8e0 + 0x310a790),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_0310a8e4 + 0x310a7c8) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = FUN_02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_0310a8e8 + 0x310a824));
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
    iVar1 = func_0x029540a4(0x7855,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

