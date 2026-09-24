
/* WARNING: Possible PIC construction at 0x02bb4c94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02bb4c98) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bb3638(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  int *unaff_r4;
  char *unaff_r5;
  undefined4 *puVar5;
  undefined4 uVar6;
  int unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 *puVar7;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  iVar1 = func_0x02953fd4(0x2534,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x2534,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    goto SUB_028bced4;
  }
  func_0x02bb3f3c(param_1);
  param_1[6] = param_2;
  switch(param_2) {
  case 0:
    uVar6 = 0;
    pcVar4 = *(code **)(*param_1 + 0xe8);
    uVar3 = *(undefined4 *)(*param_1 + 0xec);
    break;
  default:
    switch(param_2) {
    case 0x48:
      uVar6 = 0x48;
      pcVar4 = *(code **)(*param_1 + 0x2e0);
      uVar3 = *(undefined4 *)(*param_1 + 0x2e4);
      break;
    case 0x49:
      uVar6 = 0x49;
      pcVar4 = *(code **)(*param_1 + 0x2e8);
      uVar3 = *(undefined4 *)(*param_1 + 0x2ec);
      break;
    default:
      goto LAB_02bb3d74;
    case 0x4b:
      uVar6 = 0x4b;
      pcVar4 = *(code **)(*param_1 + 0x2f0);
      uVar3 = *(undefined4 *)(*param_1 + 0x2f4);
      break;
    case 0x4c:
      uVar6 = 0x4c;
      pcVar4 = *(code **)(*param_1 + 0x2f8);
      uVar3 = *(undefined4 *)(*param_1 + 0x2fc);
      break;
    case 0x4d:
      uVar6 = 0x4d;
      pcVar4 = *(code **)(*param_1 + 0x300);
      uVar3 = *(undefined4 *)(*param_1 + 0x304);
      break;
    case 0x4e:
      uVar6 = 0x4e;
      pcVar4 = *(code **)(*param_1 + 0x308);
      uVar3 = *(undefined4 *)(*param_1 + 0x30c);
      break;
    case 0x4f:
      iVar1 = *param_1;
      uVar6 = 0x4f;
      goto code_r0x02bb3d64;
    case 0x50:
      uVar6 = 0x50;
      pcVar4 = *(code **)(*param_1 + 0x310);
      uVar3 = *(undefined4 *)(*param_1 + 0x314);
      break;
    case 0x51:
      uVar6 = 0x51;
      pcVar4 = *(code **)(*param_1 + 0x318);
      uVar3 = *(undefined4 *)(*param_1 + 0x31c);
      break;
    case 0x52:
      uVar6 = 0x52;
      pcVar4 = *(code **)(*param_1 + 800);
      uVar3 = *(undefined4 *)(*param_1 + 0x324);
      break;
    case 0x53:
      uVar6 = 0x53;
      pcVar4 = *(code **)(*param_1 + 0x328);
      uVar3 = *(undefined4 *)(*param_1 + 0x32c);
      break;
    case 0x54:
      iVar1 = *param_1;
      uVar6 = 0x54;
      goto code_r0x02bb3d64;
    case 0x55:
      uVar6 = 0x55;
      pcVar4 = *(code **)(*param_1 + 0x330);
      uVar3 = *(undefined4 *)(*param_1 + 0x334);
      break;
    case 0x56:
      uVar6 = 0x56;
      pcVar4 = *(code **)(*param_1 + 0x338);
      uVar3 = *(undefined4 *)(*param_1 + 0x33c);
      break;
    case 0x57:
      uVar6 = 0x57;
      pcVar4 = *(code **)(*param_1 + 0x340);
      uVar3 = *(undefined4 *)(*param_1 + 0x344);
      break;
    case 0x58:
      uVar6 = 0x58;
      pcVar4 = *(code **)(*param_1 + 0x348);
      uVar3 = *(undefined4 *)(*param_1 + 0x34c);
      break;
    case 0x5a:
      uVar6 = 0x5a;
      pcVar4 = *(code **)(*param_1 + 0x350);
      uVar3 = *(undefined4 *)(*param_1 + 0x354);
      break;
    case 0x5b:
      uVar6 = 0x5b;
      pcVar4 = *(code **)(*param_1 + 0x358);
      uVar3 = *(undefined4 *)(*param_1 + 0x35c);
      break;
    case 0x5c:
      uVar6 = 0x5c;
      pcVar4 = *(code **)(*param_1 + 0x360);
      uVar3 = *(undefined4 *)(*param_1 + 0x364);
      break;
    case 0x5d:
      uVar6 = 0x5d;
      pcVar4 = *(code **)(*param_1 + 0x368);
      uVar3 = *(undefined4 *)(*param_1 + 0x36c);
      break;
    case 0x5e:
      iVar1 = *param_1;
      uVar6 = 0x5e;
      goto code_r0x02bb3d64;
    }
    break;
  case 0xb:
    uVar6 = 0xb;
    pcVar4 = *(code **)(*param_1 + 0xf8);
    uVar3 = *(undefined4 *)(*param_1 + 0xfc);
    break;
  case 0xc:
    uVar6 = 0xc;
    pcVar4 = *(code **)(*param_1 + 0x378);
    uVar3 = *(undefined4 *)(*param_1 + 0x37c);
    break;
  case 0xd:
    uVar6 = 0xd;
    pcVar4 = *(code **)(*param_1 + 0x100);
    uVar3 = *(undefined4 *)(*param_1 + 0x104);
    break;
  case 0xe:
    uVar6 = 0xe;
    pcVar4 = *(code **)(*param_1 + 0x108);
    uVar3 = *(undefined4 *)(*param_1 + 0x10c);
    break;
  case 0xf:
    uVar6 = 0xf;
    pcVar4 = *(code **)(*param_1 + 0x110);
    uVar3 = *(undefined4 *)(*param_1 + 0x114);
    break;
  case 0x10:
    uVar6 = 0x10;
    pcVar4 = *(code **)(*param_1 + 0x118);
    uVar3 = *(undefined4 *)(*param_1 + 0x11c);
    break;
  case 0x11:
    uVar6 = 0x11;
    pcVar4 = *(code **)(*param_1 + 0x120);
    uVar3 = *(undefined4 *)(*param_1 + 0x124);
    break;
  case 0x12:
    uVar6 = 0x12;
    pcVar4 = *(code **)(*param_1 + 0x128);
    uVar3 = *(undefined4 *)(*param_1 + 300);
    break;
  case 0x13:
    uVar6 = 0x13;
    pcVar4 = *(code **)(*param_1 + 0x138);
    uVar3 = *(undefined4 *)(*param_1 + 0x13c);
    break;
  case 0x14:
    uVar6 = 0x14;
    pcVar4 = *(code **)(*param_1 + 0x140);
    uVar3 = *(undefined4 *)(*param_1 + 0x144);
    break;
  case 0x15:
    uVar6 = 0x15;
    pcVar4 = *(code **)(*param_1 + 0x130);
    uVar3 = *(undefined4 *)(*param_1 + 0x134);
    break;
  case 0x16:
    uVar6 = 0x16;
    pcVar4 = *(code **)(*param_1 + 0x148);
    uVar3 = *(undefined4 *)(*param_1 + 0x14c);
    break;
  case 0x17:
    uVar6 = 0x17;
    pcVar4 = *(code **)(*param_1 + 0x150);
    uVar3 = *(undefined4 *)(*param_1 + 0x154);
    break;
  case 0x18:
    uVar6 = 0x18;
    pcVar4 = *(code **)(*param_1 + 0x238);
    uVar3 = *(undefined4 *)(*param_1 + 0x23c);
    break;
  case 0x19:
    uVar6 = 0x19;
    pcVar4 = *(code **)(*param_1 + 0x218);
    uVar3 = *(undefined4 *)(*param_1 + 0x21c);
    break;
  case 0x1a:
    uVar6 = 0x1a;
    pcVar4 = *(code **)(*param_1 + 0x220);
    uVar3 = *(undefined4 *)(*param_1 + 0x224);
    break;
  case 0x1b:
    uVar6 = 0x1b;
    pcVar4 = *(code **)(*param_1 + 0x248);
    uVar3 = *(undefined4 *)(*param_1 + 0x24c);
    break;
  case 0x1c:
    uVar6 = 0x1c;
    pcVar4 = *(code **)(*param_1 + 0x158);
    uVar3 = *(undefined4 *)(*param_1 + 0x15c);
    break;
  case 0x1d:
    uVar6 = 0x1d;
    pcVar4 = *(code **)(*param_1 + 0x160);
    uVar3 = *(undefined4 *)(*param_1 + 0x164);
    break;
  case 0x1e:
    uVar6 = 0x1e;
    pcVar4 = *(code **)(*param_1 + 0x178);
    uVar3 = *(undefined4 *)(*param_1 + 0x17c);
    break;
  case 0x1f:
    uVar6 = 0x1f;
    pcVar4 = *(code **)(*param_1 + 0x180);
    uVar3 = *(undefined4 *)(*param_1 + 0x184);
    break;
  case 0x20:
    uVar6 = 0x20;
    pcVar4 = *(code **)(*param_1 + 0x188);
    uVar3 = *(undefined4 *)(*param_1 + 0x18c);
    break;
  case 0x21:
    uVar6 = 0x21;
    pcVar4 = *(code **)(*param_1 + 400);
    uVar3 = *(undefined4 *)(*param_1 + 0x194);
    break;
  case 0x22:
    uVar6 = 0x22;
    pcVar4 = *(code **)(*param_1 + 0x198);
    uVar3 = *(undefined4 *)(*param_1 + 0x19c);
    break;
  case 0x23:
    uVar6 = 0x23;
    pcVar4 = *(code **)(*param_1 + 0x1a0);
    uVar3 = *(undefined4 *)(*param_1 + 0x1a4);
    break;
  case 0x24:
    uVar6 = 0x24;
    pcVar4 = *(code **)(*param_1 + 0x1a8);
    uVar3 = *(undefined4 *)(*param_1 + 0x1ac);
    break;
  case 0x25:
    uVar6 = 0x25;
    pcVar4 = *(code **)(*param_1 + 0x1b0);
    uVar3 = *(undefined4 *)(*param_1 + 0x1b4);
    break;
  case 0x26:
    uVar6 = 0x26;
    pcVar4 = *(code **)(*param_1 + 0x168);
    uVar3 = *(undefined4 *)(*param_1 + 0x16c);
    break;
  case 0x27:
    uVar6 = 0x27;
    pcVar4 = *(code **)(*param_1 + 0x170);
    uVar3 = *(undefined4 *)(*param_1 + 0x174);
    break;
  case 0x28:
    uVar6 = 0x28;
    pcVar4 = *(code **)(*param_1 + 0x1b8);
    uVar3 = *(undefined4 *)(*param_1 + 0x1bc);
    break;
  case 0x29:
    uVar6 = 0x29;
    pcVar4 = *(code **)(*param_1 + 0x1c0);
    uVar3 = *(undefined4 *)(*param_1 + 0x1c4);
    break;
  case 0x2a:
    uVar6 = 0x2a;
    pcVar4 = *(code **)(*param_1 + 0x1c8);
    uVar3 = *(undefined4 *)(*param_1 + 0x1cc);
    break;
  case 0x2b:
    uVar6 = 0x2b;
    pcVar4 = *(code **)(*param_1 + 0x1d0);
    uVar3 = *(undefined4 *)(*param_1 + 0x1d4);
    break;
  case 0x2c:
    uVar6 = 0x2c;
    pcVar4 = *(code **)(*param_1 + 0x260);
    uVar3 = *(undefined4 *)(*param_1 + 0x264);
    break;
  case 0x2d:
    uVar6 = 0x2d;
    pcVar4 = *(code **)(*param_1 + 0x1d8);
    uVar3 = *(undefined4 *)(*param_1 + 0x1dc);
    break;
  case 0x2e:
    uVar6 = 0x2e;
    pcVar4 = *(code **)(*param_1 + 0x1e0);
    uVar3 = *(undefined4 *)(*param_1 + 0x1e4);
    break;
  case 0x2f:
    uVar6 = 0x2f;
    pcVar4 = *(code **)(*param_1 + 0x1e8);
    uVar3 = *(undefined4 *)(*param_1 + 0x1ec);
    break;
  case 0x30:
    uVar6 = 0x30;
    pcVar4 = *(code **)(*param_1 + 0x1f0);
    uVar3 = *(undefined4 *)(*param_1 + 500);
    break;
  case 0x31:
    uVar6 = 0x31;
    pcVar4 = *(code **)(*param_1 + 0x268);
    uVar3 = *(undefined4 *)(*param_1 + 0x26c);
    break;
  case 0x32:
    uVar6 = 0x32;
    pcVar4 = *(code **)(*param_1 + 0x1f8);
    uVar3 = *(undefined4 *)(*param_1 + 0x1fc);
    break;
  case 0x33:
    uVar6 = 0x33;
    pcVar4 = *(code **)(*param_1 + 0x200);
    uVar3 = *(undefined4 *)(*param_1 + 0x204);
    break;
  case 0x34:
    uVar6 = 0x34;
    pcVar4 = *(code **)(*param_1 + 0x208);
    uVar3 = *(undefined4 *)(*param_1 + 0x20c);
    break;
  case 0x35:
    uVar6 = 0x35;
    pcVar4 = *(code **)(*param_1 + 0x210);
    uVar3 = *(undefined4 *)(*param_1 + 0x214);
    break;
  case 0x36:
    iVar1 = *param_1;
    uVar6 = 0x36;
    goto code_r0x02bb3d64;
  case 0x37:
    uVar6 = 0x37;
    pcVar4 = *(code **)(*param_1 + 0x278);
    uVar3 = *(undefined4 *)(*param_1 + 0x27c);
    break;
  case 0x38:
    uVar6 = 0x38;
    pcVar4 = *(code **)(*param_1 + 0x280);
    uVar3 = *(undefined4 *)(*param_1 + 0x284);
    break;
  case 0x39:
    uVar6 = 0x39;
    pcVar4 = *(code **)(*param_1 + 0x288);
    uVar3 = *(undefined4 *)(*param_1 + 0x28c);
    break;
  case 0x3a:
    uVar6 = 0x3a;
    pcVar4 = *(code **)(*param_1 + 0x290);
    uVar3 = *(undefined4 *)(*param_1 + 0x294);
    break;
  case 0x3b:
    uVar6 = 0x3b;
    pcVar4 = *(code **)(*param_1 + 0x250);
    uVar3 = *(undefined4 *)(*param_1 + 0x254);
    break;
  case 0x3c:
    uVar6 = 0x3c;
    pcVar4 = *(code **)(*param_1 + 0x298);
    uVar3 = *(undefined4 *)(*param_1 + 0x29c);
    break;
  case 0x3d:
    uVar6 = 0x3d;
    pcVar4 = *(code **)(*param_1 + 0x2a0);
    uVar3 = *(undefined4 *)(*param_1 + 0x2a4);
    break;
  case 0x3e:
    uVar6 = 0x3e;
    pcVar4 = *(code **)(*param_1 + 0x2a8);
    uVar3 = *(undefined4 *)(*param_1 + 0x2ac);
    break;
  case 0x3f:
    uVar6 = 0x3f;
    pcVar4 = *(code **)(*param_1 + 0x2b0);
    uVar3 = *(undefined4 *)(*param_1 + 0x2b4);
    break;
  case 0x40:
    iVar1 = *param_1;
    uVar6 = 0x40;
    goto code_r0x02bb3d64;
  case 0x41:
    uVar6 = 0x41;
    pcVar4 = *(code **)(*param_1 + 0x2b8);
    uVar3 = *(undefined4 *)(*param_1 + 700);
    break;
  case 0x42:
    uVar6 = 0x42;
    pcVar4 = *(code **)(*param_1 + 0x2c0);
    uVar3 = *(undefined4 *)(*param_1 + 0x2c4);
    break;
  case 0x43:
    uVar6 = 0x43;
    pcVar4 = *(code **)(*param_1 + 0x2c8);
    uVar3 = *(undefined4 *)(*param_1 + 0x2cc);
    break;
  case 0x44:
    uVar6 = 0x44;
    pcVar4 = *(code **)(*param_1 + 0x370);
    uVar3 = *(undefined4 *)(*param_1 + 0x374);
    break;
  case 0x45:
    iVar1 = *param_1;
    uVar6 = 0x45;
    goto code_r0x02bb3d64;
  case 0x46:
    uVar6 = 0x46;
    pcVar4 = *(code **)(*param_1 + 0x2d0);
    uVar3 = *(undefined4 *)(*param_1 + 0x2d4);
    break;
  case 0x47:
    uVar6 = 0x47;
    pcVar4 = *(code **)(*param_1 + 0x2d8);
    uVar3 = *(undefined4 *)(*param_1 + 0x2dc);
    break;
  case 0x4a:
    iVar1 = *param_1;
    uVar6 = 0x4a;
code_r0x02bb3d64:
    pcVar4 = *(code **)(iVar1 + 0x270);
    uVar3 = *(undefined4 *)(iVar1 + 0x274);
    break;
  case 0x59:
    uVar6 = 0x59;
    pcVar4 = *(code **)(*param_1 + 600);
    uVar3 = *(undefined4 *)(*param_1 + 0x25c);
  }
  (*pcVar4)(param_1,uVar6,uVar3);
LAB_02bb3d74:
  func_0x02bb4058(param_1,param_2);
  func_0x02bb42bc(param_1,param_2);
  func_0x02bb4520(param_1,param_2);
  func_0x02bb4784(param_1);
  unaff_r5 = (char *)(_UNK_02bb5018 + 0x2bb4bfc);
  if (*unaff_r5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bb501c + 0x2bb4c10));
    func_0x01438628(*(undefined4 *)(_UNK_02bb5020 + 0x2bb4c1c));
    func_0x01438628(*(undefined4 *)(_UNK_02bb5024 + 0x2bb4c28));
    func_0x01438628(*(undefined4 *)(_UNK_02bb5028 + 0x2bb4c34));
    func_0x01438628(*(undefined4 *)(_UNK_02bb502c + 0x2bb4c40));
    *unaff_r5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x262f,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02baef1c(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x14);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x046c2130(iVar1,**(undefined4 **)(_UNK_02bb5030 + 0x2bb4cd0));
    if (iVar1 < 1) {
      iVar1 = FUN_02bad050(param_1,param_2);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      puVar7 = *(undefined4 **)(_UNK_02bb5034 + 0x2bb4d24);
      func_0x0152da0c(&uStack_48,iVar1,*puVar7);
      uStack_38 = uStack_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      iStack_2c = iStack_3c;
      puVar5 = *(undefined4 **)(_UNK_02bb5038 + 0x2bb4d3c);
      while (iVar2 = func_0x04878f14(&uStack_38,*puVar5), iVar1 = iStack_2c, iVar2 != 0) {
        if (iStack_2c == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar1 + 0xc) == 1) {
          func_0x02bd2354(param_1,iVar1,0xffffffff);
        }
      }
      func_0x04878f10(&uStack_38,**(undefined4 **)(_UNK_02bb503c + 0x2bb4d88));
      iVar1 = FUN_02bad050(param_1,param_2);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x14);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_48,iVar1,*puVar7);
      uStack_38 = uStack_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      iStack_2c = iStack_3c;
      while (iVar1 = func_0x04878f14(&uStack_38,*puVar5), iVar1 != 0) {
        func_0x02bd2354(param_1,iStack_2c,0xffffffff);
      }
      func_0x04878f10(&uStack_38,**(undefined4 **)(_UNK_02bb5048 + 0x2bb4e08));
      iVar1 = FUN_02bad050(param_1,param_2);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x1c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_48,iVar1,*puVar7);
      uStack_38 = uStack_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      iStack_2c = iStack_3c;
      while (iVar1 = func_0x04878f14(&uStack_38,*puVar5), iVar1 != 0) {
        func_0x02bd2354(param_1,iStack_2c,0xffffffff);
      }
      func_0x04878f10(&uStack_38,**(undefined4 **)(_UNK_02bb5054 + 0x2bb4e88));
    }
    return;
  }
  iVar1 = func_0x029540a4(0x262f,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  unaff_lr = 0x2bb4c98;
  unaff_r4 = param_1;
  unaff_r6 = iVar1;
  register0x00000054 = (BADSPACEBASE *)&uStack_48;
SUB_028bced4:
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r6;
  *(char **)((int)register0x00000054 + -0x1c) = unaff_r5;
  *(int **)((int)register0x00000054 + -0x20) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x024f56c0((undefined4 *)((int)register0x00000054 + -0x50),0,param_2,0);
  iVar2 = *(int *)(iVar1 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x38) =
       *(undefined4 *)((int)register0x00000054 + -0x50);
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((int)register0x00000054 + -0x4c);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  if (iVar2 != 0) {
    func_0x01523a6c((undefined1 *)((int)register0x00000054 + -0x38),iVar2,0);
  }
  func_0x01523a6c((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
  func_0x01523a2c((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
  iVar2 = *(int *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar3 = 3;
  if (iVar1 == 0) {
    uVar3 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x024f56d0(iVar2,uVar6,(undefined1 *)((int)register0x00000054 + -0x38),uVar3);
  return;
}

