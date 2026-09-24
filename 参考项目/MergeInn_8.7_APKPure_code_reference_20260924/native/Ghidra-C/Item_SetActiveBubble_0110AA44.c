// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: Item.SetActiveBubble 0x110AA44; public virtual void SetActiveBubble(bool isActive, int timer = 0, Action createCoin) {
// Image base: 0x10000; Ghidra address: 0111aa44; native size hint: 0x324


/* WARNING: Control flow encountered bad instruction data */

void Item_SetActiveBubble_0110AA44(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar2 = (char *)(iRam0111ad44 + 0x111aa64);
  if (*pcVar2 == '\0') {
    func_0x00f6b160(*(undefined4 *)(iRam0111ad48 + 0x111aa7c));
    func_0x00f6b160(*(undefined4 *)(iRam0111ad4c + 0x111aa88));
    func_0x00f6b160(*(undefined4 *)(iRam0111ad50 + 0x111aa94));
    func_0x00f6b160(*(undefined4 *)(iRam0111ad54 + 0x111aaa0));
    *pcVar2 = '\x01';
  }
  if (param_2 == 0) {
    func_0x015063cc(*(undefined4 *)(param_1 + 0x74),0,0);
    iVar3 = *(int *)(param_1 + 0x18);
    if (iVar3 == 0) {
      func_0x00f6b3d0();
    }
    iVar3 = func_0x02007fd4(iVar3,0);
    if (iVar3 != 0) {
      iVar3 = *(int *)(param_1 + 0x18);
      if (iVar3 == 0) {
        func_0x00f6b3d0();
      }
      iVar3 = func_0x02007eac(iVar3,0);
      if (iVar3 == 0) {
        func_0x00f6b3d0();
      }
      func_0x020081a4(&uStack_30,iVar3,0);
      iVar5 = *(int *)(param_1 + 0x10);
      iVar3 = iVar5;
      if (iVar5 == 0) {
        func_0x00f6b3d0();
        iVar3 = *(int *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x00f6b3d0();
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      func_0x0110f704(3,uStack_30,uStack_2c,uStack_28,*(undefined4 *)(iVar5 + 0x1c),
                      *(undefined4 *)(iVar3 + 0x2c),0,0);
    }
    iVar3 = *(int *)(param_1 + 0x18);
    if (iVar3 == 0) {
      func_0x00f6b3d0();
    }
    func_0x02007fbc(iVar3,0,0);
    iVar3 = *(int *)(param_1 + 0x84);
    if (iVar3 == 0) {
      func_0x00f6b3d0();
    }
    iVar5 = *(int *)(param_1 + 0x70);
    *(undefined1 *)(iVar3 + 0x74) = 0;
    if (iVar5 != 0) {
      func_0x02007f68(param_1,iVar5,0);
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
    func_0x0118bb50(*(undefined4 *)(param_1 + 0x34),0,0);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x18);
    if (iVar3 == 0) {
      func_0x00f6b3d0();
    }
    func_0x02007fbc(iVar3,1,0);
    iVar3 = *(int *)(param_1 + 0x84);
    if (iVar3 == 0) {
      func_0x00f6b3d0();
    }
    puVar4 = *(undefined4 **)(iRam0111ad58 + 0x111aaec);
    *(char *)(iVar3 + 0x74) = (char)param_2;
    uVar1 = func_0x00f6b3c4(*puVar4);
    puVar6 = *(undefined4 **)(iRam0111ad5c + 0x111ab0c);
    func_0x02fbd344(uVar1,param_1,*puVar6,0);
    if (*(int *)(**(int **)(iRam0111ad60 + 0x111ab1c) + 0x74) == 0) {
      func_0x00f6b294();
    }
    func_0x01478584(uVar1,0);
    uVar1 = func_0x00f6b3c4(*puVar4);
    puVar7 = *(undefined4 **)(iRam0111ad64 + 0x111ab58);
    func_0x02fbd344(uVar1,param_1,*puVar7,0);
    func_0x0147876c(uVar1,0);
    uVar1 = func_0x00f6b3c4(*puVar4);
    func_0x02fbd344(uVar1,param_1,*puVar6,0);
    func_0x01478490(uVar1,0);
    uVar1 = func_0x00f6b3c4(*puVar4);
    func_0x02fbd344(uVar1,param_1,*puVar7,0);
    func_0x01478678(uVar1,0);
    iVar3 = func_0x0118bc14(*(undefined4 *)(param_1 + 0x34),0);
    if (iVar3 != 0) {
      param_3 = iVar3;
    }
    if (*(int *)(param_1 + 0x70) != 0) {
      func_0x02007f68(param_1,*(int *)(param_1 + 0x70),0);
    }
    uVar1 = func_0x0111ad68(param_1,param_3,param_4);
    uVar1 = func_0x02007f6c(param_1,uVar1,0);
    *(undefined4 *)(param_1 + 0x70) = uVar1;
  }
  return;
}

