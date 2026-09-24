
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02974ec0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  
  pcVar5 = (char *)(_UNK_02974ff0 + 0x2974ee0);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02974ff4 + 0x2974ef4));
    func_0x01438628(*(undefined4 *)(_UNK_02974ff8 + 0x2974f00));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x47ab,0);
  if (iVar1 == 0) {
    func_0x02bf1544(param_1,param_2,param_3,0);
    if (param_3 == 0x21a999) {
      if (*(int *)(**(int **)(_UNK_02974ffc + 0x2974f88) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02975000 + 0x2974fa4));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x02ebdab0(iVar1,1,0);
      iVar1 = *(int *)(param_1 + 0xe4);
      if (iVar1 != 0) {
        pcVar5 = (char *)(_UNK_0297519c + 0x2975024);
        if (*pcVar5 == '\0') {
          func_0x01438628(*(undefined4 *)(_UNK_029751a0 + 0x2975038));
          func_0x01438628(*(undefined4 *)(_UNK_029751a4 + 0x2975044));
          func_0x01438628(*(undefined4 *)(_UNK_029751a8 + 0x2975050));
          func_0x01438628(*(undefined4 *)(_UNK_029751ac + 0x297505c));
          *pcVar5 = '\x01';
        }
        iVar2 = func_0x02953fd4(0x47ac,0);
        if (iVar2 == 0) {
          if (*(int *)(**(int **)(_UNK_029751b0 + 0x29750c4) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_029751b4 + 0x29750e0));
          iVar3 = func_0x024eecb8(iVar1,0);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x024ef228(&uStack_30,iVar3,0);
          uVar6 = *(undefined4 *)(iVar1 + 0x54);
          uVar4 = func_0x014388d4(**(undefined4 **)(_UNK_029751b8 + 0x297512c));
          func_0x0152e3ec(uVar4,iVar1,**(undefined4 **)(_UNK_029751bc + 0x297514c),0);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          func_0x02b7dbf0(iVar2,param_2,0x21a999,uStack_30,uStack_2c,uStack_28,uVar6,0x3f4ccccd,
                          uVar4,0);
        }
        else {
          iVar2 = func_0x029540a4(0x47ac,0);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          func_0x02871f94(iVar2,iVar1,param_2,0x21a999,0);
        }
        return;
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x47ab,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_20 = 0;
    func_0x02871f94(iVar1,param_1,param_2,param_3);
  }
  return;
}

